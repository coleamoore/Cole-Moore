const express = require('express')
const path = require('path');
const conf = require('conf');

//create our express app
const app = express();

//create our data store for user information
const data = new conf();

//----------

data.clear();

// hard coding a user into out user data store
data.set('user@example.com', {
    email: 'user@example.com',
    password: 'password'
});

//----------

// prints out what is currently being stored (debug)
console.log(data.store);

app.use(express.json());

app.use(express.urlencoded({
    extended: false
}));

app.route('/login')
    .get((req, res) => {
        res.sendFile(path.join(__dirname, 'login.html'));
    })
    .post((req, res) => {
        //some debug info
        console.log(req.body);

        // try to get the user from our data store
        const user = data.get(req.body.email);

        console.log(user);

        // check if the user exists
        if (user === undefined) {
            res.json({
                message: 'email/password pair not found'
            })
        

        // check if the password matches
        } else if (user.password !== req.body.password) {
            res.json({
                message: 'email/password pair not found'
            })
        
        
        } else {
            res.json({
                message: 'success!'
            })
        }
    });

app.route('/register')
    .get((req, res) => {
        res.sendFile(path.join(__dirname, 'register.html'));
    })
    .post((req, res) => {
        //some debug info
        console.log(req.body);

        const user = data.get(req.body.email);

        //check that the passwords match up
        if (req.body.password !== req.body.verified_password) {
            res.json({
                message: 'passwords do not match'
            })
        //check if the user already exists
        } else if (user !== undefined) {
            res.json({
                message: 'email has already been registered'
            })
        //send success message
        } else {
            // add the user to our store
            data.set(req.body.email, {
                email: req.body.email,
                password: req.body.password
            })
            //send success message
            res.json({
                message: 'success!'
            })
        }
    })

app.listen(3000, () => {
    console.log('express app running at http://localhost:3000/')
});
