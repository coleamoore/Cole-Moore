/*
Author: Cole Moore
Class: CS 316
Project: Programming Assignment 4 (Back End Web Development)
*/
const express = require('express')
const path = require('path');
const conf = require('conf');
const handlebars = require('express-handlebars');
const { v1: uuidv1 } = require('uuid');

//create our express app
const app = express();

//create our data store for user information
const data = new conf();

//clear database
data.clear();

// hard coding a user into out user data store
//NOTE: CAN COMMENT OUT DEFAULT USER IF NEEDED
//ONLY USED FOR INITIAL TESTING
//------------------------------

data.set('user@example.com', {
    uuid: uuidv1(),
    username: 'user',
    email: 'user@example.com',
    password: 'password',
    phone: '1112223333'
});

//------------------------------

// prints out what is currently being stored (debug)
console.log(data.store);

// add the handlebars templating engine
const handlebars_inst = handlebars.create({
    extname: '.handlebars',
    compilerOptions: {
        preventIndent: true
    },
    layoutsDir: path.join(__dirname, 'views', 'layouts'),
    partialsDir: path.join(__dirname, 'views', 'partials')
});
app.engine('handlebars', handlebars_inst.engine)
app.set('view engine', 'handlebars')
app.set('views', path.join(__dirname, 'views', 'pages'))

// utilize CSS files
app.use(express.static(path.join(__dirname, '/public')));

app.use(express.json());

app.use(express.urlencoded({
    extended: false
}));

// /user/login
app.route('/user/login')
    //GET - /user/login
    .get((req, res) => {
        //render login page
        res.render('login');
    })
    //POST - /user/login
    .post((req, res) => {
        //some debug info
        //console.log(req.body);

        // try to get the user from our data store
        const user = data.get(req.body.email);

        // check if the user exists and if the passwords match
        if (user === undefined || user.password !== req.body.password) {
            // render error message
            res.render('login', {
                alert: {
                    level: 'warning',
                    title: 'Email/Password pair not found',
                    message: 'Please enter credentials again. Username/Password pair not found'
                }
            })
        }
        else {
            // redirect to user page and display information
            // of user that logged in
            res.redirect(user.email);
        }
    });

// /user/new
app.route('/user/new')
    // GET - /user/new
    .get((req, res) => {
        //render new page
        res.render('new');
    })
    // POST - /user/new
    .post((req, res) => {
        //some debug info
        //console.log(req.body);

        const user = data.get(req.body.email);
        const user_name = data.get(req.body.username);

        let look_for_username = req.body.username;
        //console.log(look_for_username);
        let found_user;
        // find username
        for (let user_id of Object.values(data.store)) {
            if (user_id === look_for_username) {
                found_user = user_id;
            }
        }
        //console.log(req.body);

        // check that the passwords match up
        if (req.body.password !== req.body.verified_password) {
            res.render('new', {
                alert: {
                    level: 'warning',
                    title: 'Passwords do not match',
                    message: 'Please enter credentials again.'
                }
            })
        }
        // check if the email already exists
        else if (user !== undefined) {
            res.render('new', {
                alert: {
                    level: 'warning',
                    title: 'Email/Username is taken',
                    message: 'Please enter credentials again.'
                }
            })
        }
        // NOTE: NOT WORKING
        /*
        else if (user_name !== undefined) {
            res.render('new', {
                alert: {
                    level: 'warning',
                    title: 'Username is taken',
                    message: 'Please enter credentials again.'
                }
            })
        }
        */
       // NOTE: NOT WORKING
        // check if the username already exists
        else if (found_user !== undefined) {
            res.render('new', {
                alert: {
                    level: 'warning',
                    title: 'Email/Username is taken',
                    message: 'Please enter credentials again.'
                }
            })
        }
        // if all credentials are acceptable
        else {
            // add the user to our store
            data.set(req.body.email, {
                uuid: uuidv1(),
                username: req.body.username,
                email: req.body.email,
                password: req.body.password,
                phone: req.body.phone
            })
            console.log(data.store);
            // redirect to login
            res.redirect('/user/login');
        }
    });


// /user/:user_id
app.route('/user/:user_id')
    //GET - /user/:user_id
    .get((req, res) => {

        const index = req.path.substring(6);
        //console.log(index);
        const user = data.get(index);
        //console.log(user);

        // if the user exists
        // render user information
        if (user !== undefined) {
            res.render('user', {
                info: {
                    username: user.username,
                    email: user.email,
                    password: user.password,
                    phone: user.phone,
                }
            })
        }
        // if user does not exist
        // render 404 page
        else {
            res.status(404).render('404', {
                alert: {
                    level: 'warning',
                    title: '404 Page Not Found',
                    message: 'Page does not exist'
                }
            })
        }
    })
    //POST - /user/:user_id
    .post((req, res) => {
        //some debug info
        //console.log(req.body);

        //idenfity user
        const index = req.path.substring(6);
        //console.log(index);
        const former_user = data.get(index);
        //console.log(former_user);
        const user = data.get(req.body.email);
       
        // if user does not exist
        if (user === undefined) {
            res.status(404).render('404', {
                alert: {
                    level: 'warning',
                    title: '404 Page Not Found',
                    message: 'Page does not exist'
                }
            })
        }
        // if user does exist
        else {
            //delete old user
            data.delete(index);
            data.delete(former_user);
        
            //update user information in database
            // NOTE: CAN UPDATE USERNAME AND PHONE NUMBER
            data.set(req.body.email, {
                uuid: former_user.uuid,
                username: req.body.username,
                email: req.body.email,
                password: former_user.password,
                phone: req.body.phone
            })

            const user = data.get(req.body.email);
            // create success message and update user information on page
            res.render('user', {
                alert: {
                    level: 'success',
                    title: 'Success!',
                    message: 'You updated your information'
                },
                info: {
                    username: user.username,
                    email: user.email,
                    password: user.password,
                    phone: user.phone
                }
            })
        }
        console.log(data.store);
    })

app.listen(3000, () => {
    console.log('express app running at http://localhost:3000/')
});
