/***************************************************************************

 Loads an image (JPEG or GIF), displays it, selects from
 a small set of image processing routines, and shows the results

 ***************************************************************************/

import java.awt.*;
import java.awt.event.*;
import java.awt.image.*;
import java.awt.geom.*;
import java.io.*;
import javax.swing.*;
import javax.swing.event.*;
import javax.imageio.*;
import javax.swing.filechooser.FileSystemView;


public class MyImageProc extends JFrame {

    // This frame will hold the primary components:
    // 	An object to hold the buffered image and its associated operations
    //	Components to control the interface

    // Instance variables
    private BufferedImage image;   // the image
    private MyImageObj view;       // a component in which to display an image
    private JLabel infoLabel;      // an informative label for the simple GUI
    private JButton SharpenButton; // Button to trigger sharpen operator
    private JButton BlurButton;    // Button to trigger blur operator
    private JButton EdgeButton;    // Button to trigger edge detect operator
    private JButton OriginalButton;// Button to restore original image
    private JButton CustomButton;  // Button to hold custom filter
    private JButton GaussianButton;  // Button to trigger Gaussian blur
    private JButton rotleft;
    private JButton rotright;
    private JTextField filterfield[];
    private int x, y;              // Store x, y mouse position for paint
    private boolean firstdrag=true;// Flag to toggle draw mode
    private JLabel ThreshLabel;   // Label for threshold slider
    private JSlider thresholdslider;
    private float customfiltervalues[];
    private int rotation=0;

    // Constructor for the frame
    public MyImageProc () {

        super();				// call JFrame constructor

        this.buildMenus();		// helper method to build menus
        this.buildComponents();		// helper method to set up components
        this.buildDisplay();		// Lay out the components on the display
    }

    //  Builds the menus to be attached to this JFrame object
    //  Primary side effect:  menus are added via the setJMenuBar call
    //  		Action listeners for the menu items are anonymous inner
    //		classes here
    //  This helper method is called once by the constructor
    private void buildMenus () {

        final JFileChooser fc = new JFileChooser(".");
        JMenuBar bar = new JMenuBar();
        this.setJMenuBar (bar);
        JMenu fileMenu = new JMenu ("File");
        JMenuItem fileopen = new JMenuItem ("Open");
        JMenuItem fileexit = new JMenuItem ("Exit");

        fileopen.addActionListener(
                new ActionListener () {
                    public void actionPerformed (ActionEvent e) {
                        int returnVal = fc.showOpenDialog(MyImageProc.this);
                        if (returnVal == JFileChooser.APPROVE_OPTION) {
                            File file = fc.getSelectedFile();
                            try {
                                image = ImageIO.read(file);
                            } catch (IOException e1){};

                            view.setImage(image);
                            view.showImage();
                        }
                    }
                }
        );
        fileexit.addActionListener(
                new ActionListener () {
                    public void actionPerformed (ActionEvent e) {
                        System.exit(0);
                    }
                }
        );

        fileMenu.add(fileopen);
        fileMenu.add(fileexit);
        bar.add(fileMenu);
    }

    //  Allocate components (these are all instance vars of this frame object)
    //  and set up action listeners for each of them
    //  This is called once by the constructor
    private void buildComponents() {

        // Create components to in which to display image and GUI controls
        // reads a default image
        view = new MyImageObj(readImage("src/Landscape.jpg"));
        //view = new MyImageObj();
        infoLabel = new JLabel("Original Image");
        OriginalButton = new JButton("Original");
        SharpenButton = new JButton("Sharpen");
        BlurButton = new JButton("Blur");
        EdgeButton = new JButton("Edges");
        CustomButton = new JButton ("Custom");
        GaussianButton = new JButton("Gaussian Blur"); //GaussianBlur button
        rotleft = new JButton ("<<");
        rotright = new JButton (">>");
        filterfield = new JTextField[9];
        customfiltervalues = new float[9];
        for (int i=0; i<filterfield.length; i++) {
            filterfield[i] = new JTextField (5);
            filterfield[i].setText("0.0");
        }
        filterfield[4].setText("1.0");

        ThreshLabel = new JLabel("Threshold Value: 128");
        thresholdslider = new JSlider( SwingConstants.VERTICAL, 0, 255, 10);
        thresholdslider.setMajorTickSpacing(10);
        thresholdslider.setPaintTicks(true);

        // slider event triggers a display of thresholded image
        thresholdslider.addChangeListener(
                new ChangeListener() {
                    public void stateChanged (ChangeEvent e) {
                        view.ThresholdImage(thresholdslider.getValue());
                        infoLabel.setText("Thresholded Image");
                        ThreshLabel.setText("Threshold Value: " +
                                Integer.toString(thresholdslider.getValue()));
                    }
                }
        );

        // Listen for mouse events to allow painting on image
        view.addMouseMotionListener(
                new MouseMotionAdapter() {
                    public void mouseDragged(MouseEvent event) {
                        Graphics g = view.getGraphics();
                        g.setColor (Color.white);
                        if (firstdrag) {
                            x = event.getX();  y = event.getY();
                            firstdrag = false;
                        }
                        else {
                            view.showImage();
                            x=event.getX();
                            y=event.getY();
                            int w=view.getImage().getWidth();
                            int h=view.getImage().getHeight();
                            g.fillOval (x-5, y-5, 10, 10);
                            g.drawLine (0,0, x, y);
                            g.drawLine (0,h, x, y);
                            g.drawLine (w,h, x, y);
                            g.drawLine (w,0, x, y);
                        }
                    }
                }
        );

        // Listen for mouse release to detect when we've stopped painting
        view.addMouseListener(
                new MouseAdapter() {
                    public void mouseReleased(MouseEvent event) {
                        Graphics g = view.getGraphics();
                        firstdrag = true;
                        x=event.getX();
                        y=event.getY();
                        int w=view.getImage().getWidth();
                        int h=view.getImage().getHeight();
                        g.fillOval (x-5, y-5, 10, 10);
                        g.drawLine (0,0, x, y);
                        g.drawLine (0,h, x, y);
                        g.drawLine (w,h, x, y);
                        g.drawLine (w,0, x, y);


                    }
                }
        );

        // Button listeners activate the buffered image object in order
        // to display appropriate function
        OriginalButton.addActionListener(
                new ActionListener () {
                    public void actionPerformed (ActionEvent e) {
                        view.showImage();
                        infoLabel.setText("Original");
                    }
                }
        );
        SharpenButton.addActionListener(
                new ActionListener () {
                    public void actionPerformed (ActionEvent e) {
                        view.SharpenImage();
                        infoLabel.setText("Sharpened");
                    }
                }
        );
        BlurButton.addActionListener(
                new ActionListener () {
                    public void actionPerformed (ActionEvent e) {
                        view.BlurImage();
                        infoLabel.setText("Blur");
                    }
                }
        );
        EdgeButton.addActionListener(
                new ActionListener () {
                    public void actionPerformed (ActionEvent e) {
                        view.EdgeImage();
                        view.repaint();
                        infoLabel.setText("Edges");
                    }
                }
        );
        CustomButton.addActionListener(
                new ActionListener () {
                    public void actionPerformed (ActionEvent e) {
                        loadcustomvalues();
                        view.CustomImage();
                        infoLabel.setText("Custom");
                    }
                }
        );
        //Gaussian Blur button
        GaussianButton.addActionListener(
                new ActionListener () {
                    public void actionPerformed (ActionEvent e) {
                        loadcustomvalues();
                        view.GaussianBlur();
                        infoLabel.setText("Gaussian Blur");
                    }
                }
        );
        rotleft.addActionListener(
                new ActionListener () {
                    public void actionPerformed (ActionEvent e) {
                        rotation-=10;
                        view.ApplyAffine(rotation);
                        infoLabel.setText(">>");
                    }
                }
        );
        rotright.addActionListener(
                new ActionListener () {
                    public void actionPerformed (ActionEvent e) {
                        rotation+=10;
                        view.ApplyAffine(rotation);
                        infoLabel.setText("<<");
                    }
                }
        );
    }

    private void loadcustomvalues () {
        for (int i=0; i<customfiltervalues.length; i++)
            customfiltervalues[i]=Float.parseFloat(filterfield[i].getText());
    }

    // This helper method adds all components to the content pane of the
    // JFrame object.  Specific layout of components is controlled here
    private void buildDisplay () {

        // Build first JPanel
        JPanel controlPanel = new JPanel();
        GridLayout grid = new GridLayout (1, 5);
        controlPanel.setLayout(grid);
        controlPanel.add(infoLabel);
        controlPanel.add(OriginalButton);
        controlPanel.add(SharpenButton);
        controlPanel.add(BlurButton);
        controlPanel.add(EdgeButton);
        controlPanel.add(CustomButton);
        controlPanel.add(rotleft);
        controlPanel.add(rotright);
        controlPanel.add(GaussianButton);

        // Build second JPanel
        JPanel thresholdcontrolPanel = new JPanel();
        BorderLayout layout = new BorderLayout (5, 5);
        thresholdcontrolPanel.setLayout (layout);
        thresholdcontrolPanel.add(ThreshLabel,BorderLayout.NORTH);
        thresholdcontrolPanel.add(thresholdslider,BorderLayout.CENTER);

        // Build third JPanel
        JPanel filterPanel = new JPanel();
        grid = new GridLayout (3, 3);
        filterPanel.setLayout(grid);
        for (int i=0; i<filterfield.length; i++)
            filterPanel.add(filterfield[i]);

        // Add panels and image data component to the JFrame
        Container c = this.getContentPane();
        c.add(view, BorderLayout.EAST);
        c.add(controlPanel, BorderLayout.SOUTH);
        c.add(thresholdcontrolPanel, BorderLayout.WEST);
        c.add(filterPanel, BorderLayout.NORTH);

    }

    // This method reads an Image object from a file indicated by
    // the string provided as the parameter.  The image is converted
    // here to a BufferedImage object, and that new object is the returned
    // value of this method.
    // The mediatracker in this method can throw an exception
    public BufferedImage readImage (String file) {
        Image image = Toolkit.getDefaultToolkit().getImage(file);
        MediaTracker tracker = new MediaTracker (new Component () {});
        tracker.addImage(image, 0);
        try { tracker.waitForID (0); }
        catch (InterruptedException e) {}
        BufferedImage bim = new BufferedImage
                (image.getWidth(this), image.getHeight(this),
                        BufferedImage.TYPE_INT_RGB);
        Graphics2D big = bim.createGraphics();
        big.drawImage (image, 0, 0, this);
        return bim;
    }

    // The main method allocates the "window" and makes it visible.
    // The windowclosing event is handled by an anonymous inner (adapter)
    // class
    // Command line arguments are ignored.
    public static void main(String[] argv) {
        JFrame frame = new MyImageProc();
        frame.pack();
        frame.setVisible(true);
        frame.addWindowListener (
                new WindowAdapter () {
                    public void windowClosing ( WindowEvent e) {
                        System.exit(0);
                    }
                }
        );
    }

    //Helper class
    public class MyImageObj extends JLabel {

        // instance variable to hold the buffered image
        private BufferedImage bim=null;
        private BufferedImage filteredbim=null;

        //  tell the paintcomponent method what to draw
        private boolean showfiltered=false;

        // here are a few kernels to try
        private final float[] LOWPASS3x3 =
                {0.1f, 0.1f, 0.1f, 0.1f, 0.2f, 0.1f, 0.1f, 0.1f, 0.1f};
        private final float[] SHARPEN3x3 =
                {0.f, -1.f, 0.f, -1.f, 5.f, -1.f, 0.f, -1.f, 0.f};
        private final float[] EDGE3x3 =
                {0.f, -1.f, 0.f, -1.f, 4.0f, -1.f, 0.f, -1.f, 0.f};

        //Radius 1 -- 3x3 kernel
        private final float[] radius1 =
                {1f/16f, 2f/16f, 1f/16f, 2f/16f, 4f/16f, 2f/16f, 1f/16f, 2f/16f, 1f/16f};
        //Radius 2 -- 5x5 kernel
        private final float[] radius2 =
                {1f/273f, 4f/273f, 7f/273f, 4f/273f, 1f/273f,
                        4f/273f, 16f/273f, 26f/273f, 16f/273f, 4f/273f,
                        7f/273f, 26f/273f, 41f/273f, 26f/273f, 7f/273f,
                        4f/273f, 16f/273f, 26f/273f, 16f/273f, 4f/273f,
                        1f/273f, 4f/273f, 7f/273f, 4f/273f, 1f/273f};
        //Radius 3 -- 7x7 kernel
        private final float[] radius3 =
                {0f/1003f, 0f/1003f, 1f/1003f, 2f/1003f, 1f/1003f, 0f/1003f, 0f/1003f,
                        0f/1003f, 3f/1003f, 13f/1003f, 22f/1003f, 13f/1003f, 3f/1003f, 0f/1003f,
                        1f/1003f, 13f/1003f, 59f/1003f, 97f/1003f, 59f/1003f, 13f/1003f, 1f/1003f,
                        2f/1003f, 22f/1003f, 97f/1003f, 159f/1003f, 97f/1003f, 22f/1003f, 2f/1003f,
                        1f/1003f, 13f/1003f, 59f/1003f, 97f/1003f, 59f/1003f, 13f/1003f, 1f/1003f,
                        0f/1003f, 3f/1003f, 13f/1003f, 22f/1003f, 13f/1003f, 3f/1003f, 0f/1003f,
                        0f/1003f, 0f/1003f, 1f/1003f, 2f/1003f, 1f/1003f, 0f/1003f, 0f/1003f,};


        // Default constructor
        public MyImageObj() {
        }

        // This constructor stores a buffered image passed in as a parameter
        public MyImageObj(BufferedImage img) {
            bim = img;
            filteredbim = new BufferedImage
                    (bim.getWidth(), bim.getHeight(), BufferedImage.TYPE_INT_RGB);
            setPreferredSize(new Dimension(bim.getWidth(), bim.getHeight()));

            this.repaint();
        }

        // This mutator changes the image by resetting what is stored
        // The input parameter img is the new image;  it gets stored as an
        //     instance variable
        public void setImage(BufferedImage img) {
            if (img == null) return;
            bim = img;
            filteredbim = new BufferedImage
                    (bim.getWidth(), bim.getHeight(), BufferedImage.TYPE_INT_RGB);
            setPreferredSize(new Dimension(bim.getWidth(), bim.getHeight()));
            showfiltered=false;
            this.repaint();
        }

        // accessor to get a handle to the bufferedimage object stored here
        public BufferedImage getImage() {
            return bim;
        }

        //  apply the sharpen operator
        public void SharpenImage() {
            if (bim == null) return;
            Kernel kernel = new Kernel (3, 3, SHARPEN3x3);
            ConvolveOp cop = new ConvolveOp (kernel, ConvolveOp.EDGE_NO_OP, null);

            // make a copy of the buffered image
            BufferedImage newbim = new BufferedImage
                    (bim.getWidth(), bim.getHeight(),
                            BufferedImage.TYPE_INT_RGB);
            Graphics2D big = newbim.createGraphics();
            big.drawImage (bim, 0, 0, null);

            // apply the filter the copied image
            // result goes to a filtered copy
            cop.filter(newbim, filteredbim);
            showfiltered=true;
            this.repaint();
        }

        //  apply the blur operator
        public void BlurImage() {
            if (bim == null) return;
            Kernel kernel = new Kernel (3, 3, LOWPASS3x3);
            ConvolveOp cop = new ConvolveOp (kernel, ConvolveOp.EDGE_NO_OP, null);

            // make a copy of the buffered image
            BufferedImage newbim = new BufferedImage
                    (bim.getWidth(), bim.getHeight(),
                            BufferedImage.TYPE_INT_RGB);
            Graphics2D big = newbim.createGraphics();
            big.drawImage (bim, 0, 0, null);

            // apply the filter the copied image
            // result goes to a filtered copy
            cop.filter(newbim, filteredbim);
            showfiltered=true;
            this.repaint();
        }

        //Apply the Gaussian blur operator
        public void GaussianBlur() {
            if (bim == null) return;
            //Make popup to input integer for kernel radius
            JFrame frame = new JFrame();
            Object result = JOptionPane.showInputDialog(frame, "Enter kernel radius:");
            //Make popup to input integer for kernel radius
            JFrame f = new JFrame();
            Object s = JOptionPane.showInputDialog(frame, "Enter sigma between 1-3:");
            String r = (String) result;     //Convert to string
            String si = (String) s;
            if (r != null) {
                float radius = Float.parseFloat(r);     //Convert to float
                float sigma = Float.parseFloat(si);     //Convert to float
                //int rad = Integer.parseInt(r);          //Convert to int
                //int kernelRadius = (2*rad) + 1;
                /*
                if (radius == 1 && kernelRadius == 3) {
                    Kernel kernel = new Kernel(kernelRadius, kernelRadius, radius1);
                    ConvolveOp cop = new ConvolveOp(kernel, ConvolveOp.EDGE_NO_OP, null);

                    // make a copy of the buffered image
                    BufferedImage newbim = new BufferedImage
                            (bim.getWidth(), bim.getHeight(),
                                    BufferedImage.TYPE_INT_RGB);
                    Graphics2D big = newbim.createGraphics();
                    big.drawImage(bim, 0, 0, null);

                    // apply the filter the copied image
                    // result goes to a filtered copy
                    cop.filter(newbim, filteredbim);
                    showfiltered = true;
                    this.repaint();
                }
                if (radius == 2 && kernelRadius == 5) {
                    Kernel kernel = new Kernel(kernelRadius, kernelRadius, radius2);
                    ConvolveOp cop = new ConvolveOp(kernel, ConvolveOp.EDGE_NO_OP, null);

                    // make a copy of the buffered image
                    BufferedImage newbim = new BufferedImage
                            (bim.getWidth(), bim.getHeight(),
                                    BufferedImage.TYPE_INT_RGB);
                    Graphics2D big = newbim.createGraphics();
                    big.drawImage(bim, 0, 0, null);

                    // apply the filter the copied image
                    // result goes to a filtered copy
                    cop.filter(newbim, filteredbim);
                    showfiltered = true;
                    this.repaint();
                }
                if (radius == 3 && kernelRadius == 7) {
                    Kernel kernel = new Kernel(kernelRadius, kernelRadius, radius3);
                    ConvolveOp cop = new ConvolveOp(kernel, ConvolveOp.EDGE_NO_OP, null);

                    // make a copy of the buffered image
                    BufferedImage newbim = new BufferedImage
                            (bim.getWidth(), bim.getHeight(),
                                    BufferedImage.TYPE_INT_RGB);
                    Graphics2D big = newbim.createGraphics();
                    big.drawImage(bim, 0, 0, null);

                    // apply the filter the copied image
                    // result goes to a filtered copy
                    cop.filter(newbim, filteredbim);
                    showfiltered = true;
                    this.repaint();
                }
                */
                //For any radius >3
                //else {
                Kernel kernel = makeKernel(radius, sigma);
                //Constructs ConvolveOp given kernel
                ConvolveOp cop = new ConvolveOp(kernel, ConvolveOp.EDGE_NO_OP, null);

                // make a copy of the buffered image
                BufferedImage newbim = new BufferedImage
                        (bim.getWidth(), bim.getHeight(),
                                BufferedImage.TYPE_INT_RGB);
                Graphics2D big = newbim.createGraphics();
                big.drawImage(bim, 0, 0, null);

                // apply the filter the copied image
                // result goes to a filtered copy
                cop.filter(newbim, filteredbim);
                showfiltered = true;
                this.repaint();
                //}
            }
        }

        // make a kernel for Gaussian blur and return it
        // given radius (1-10) and sigma (1-3)
        public Kernel makeKernel(float radius, float sigma) {
            //Calculate variables
            int r = (int)Math.ceil(radius);
            int rows = r*2+1;
            float[] matrix = new float[rows];
            //float sigma = 1;    //default value
            float sigmasqr2 = 2 * sigma * sigma;
            float sigmaPi2 = (float) Math.PI * sigma * 2;
            float sqrtSigmaPi2 = (float) Math.sqrt(sigmaPi2);
            float radiussqr = radius*radius;
            float total = 0;
            int index = 0;

            for (int row = -r; row <= r; row++) {
                float distance = row*row;
                if (distance > radiussqr)
                    matrix[index] = 0;
                else
                    matrix[index] = (float)Math.exp(-(distance)/sigmasqr2) / sqrtSigmaPi2;
                total += matrix[index];     //total should normalize to 1
                index++;
                //System.out.println(total);
            }
            for (int i = 0; i < rows; i++)
                matrix[i] /= total;

            return new Kernel(rows, 1, matrix);
        }

        //Allows user to upload a new image
        public void uploadNewImage() {
            // In this process argument passed
            // is an object of File System View
            JFileChooser j = new JFileChooser(FileSystemView.getFileSystemView());

            // Open the save dialog
            j.showSaveDialog(null);

        }

        //  apply the detect-edge operator
        public void EdgeImage() {
            if (bim == null) return;
            Kernel kernel = new Kernel (3, 3, EDGE3x3);
            ConvolveOp cop = new ConvolveOp (kernel, ConvolveOp.EDGE_NO_OP, null);

            // make a copy of the buffered image
            BufferedImage newbim = new BufferedImage
                    (bim.getWidth(), bim.getHeight(),
                            BufferedImage.TYPE_INT_RGB);
            Graphics2D big = newbim.createGraphics();
            big.drawImage (bim, 0, 0, null);

            // apply the filter the copied image
            // result goes to a filtered copy
            cop.filter(newbim, filteredbim);
            showfiltered=true;
            this.repaint();
        }

        //  apply the detect-edge operator
        public void CustomImage() {
            if (bim == null) return;
            Kernel kernel = new Kernel (3, 3, customfiltervalues);
            ConvolveOp cop = new ConvolveOp (kernel, ConvolveOp.EDGE_NO_OP, null);

            // make a copy of the buffered image
            BufferedImage newbim = new BufferedImage
                    (bim.getWidth(), bim.getHeight(),
                            BufferedImage.TYPE_INT_RGB);
            Graphics2D big = newbim.createGraphics();
            big.drawImage (bim, 0, 0, null);

            // apply the filter the copied image
            // result goes to a filtered copy
            cop.filter(newbim, filteredbim);
            showfiltered=true;
            this.repaint();
        }

        //  apply the threshold operator via colormap lookup table
        //  input parameter is an integer indicating the threshold value
        public void ThresholdImage(int value) {
            if (bim == null) return;
            int i;
            byte thresh[] = new byte[256];
            if ((value < 0) || (value > 255))
                value = 128;
            for (i=0; i < value; i++)
                thresh[i] = 0;
            for (int j=i; j < 255; j++)
                thresh[j] = (byte)255;
            ByteLookupTable blut = new ByteLookupTable (0, thresh);
            LookupOp lop = new LookupOp (blut, null);
            lop.filter (bim, filteredbim);
            showfiltered=true;
            this.repaint();
        }

        public void ApplyAffine(int rot) {
            float radianrot = (float)((double)rot/(double)180.0*(double)(Math.PI));
            float x= (float)bim.getWidth()/(float)2.0;
            float y= (float)bim.getHeight()/(float)2.0;

            if (bim == null) return;

            // get the graphis context of this buffered image
            Graphics2D g2 = filteredbim.createGraphics();
            // erase the image
            g2.fillRect(0, 0, (int)x*2,(int)y*2);

            // Several ways to do transformations on an image the graphics context
            //
            // First way is to have the complete transform specified, and then use
            // the setTransform()

            // This is a rotation about the center of the image
            AffineTransform transform = new
                    AffineTransform(Math.cos(radianrot), Math.sin(radianrot),
                    -Math.sin(radianrot), Math.cos(radianrot),
                    x-x*Math.cos(radianrot)+y*Math.sin(radianrot),
                    y-x*Math.sin(radianrot)-y*Math.cos(radianrot));

            // Here are a couple of other transforms to try
            //AffineTransform transform = new
            //AffineTransform(Math.cos(radianrot), Math.sin(radianrot),
            //-Math.sin(radianrot), Math.cos(radianrot),
            //0.0, 0.0);
            //AffineTransform transform = new
            //AffineTransform(1.0, 4.3, -1.1, 1.0,
            //8.0, -10.0);

            // If you are using the setTransform method, do this
            //g2.setTransform(transform);

            // =======
            // The second way is to specify the transform as a sequence of simple
            // affine transformations and put them on the transform "stack" using the
            // transform() method, which applies the composite transform represented by
            // all the transformations on the stack in "last-specified-first-applied" order
            //
            // Translate to origin, i.e., prepare to rotate about the center of the image
            AffineTransform t0 = new AffineTransform(1, 0, 0, 1, -x, -y);
            // Apply rotation about origin
            AffineTransform t1 = new AffineTransform(Math.cos(radianrot), Math.sin(radianrot),
                    -Math.sin(radianrot), Math.cos(radianrot), 0, 0);
            // Translate back to the original position
            AffineTransform t2 = new AffineTransform(1, 0, 0, 1, x, y);

            // Put the transforms on the stack:  Order matters!
            g2.transform(t2);
            g2.transform(t1);
            //g2.transform(t0);

            // =======
            // The third way is to use the individual transforms in the API (not the general
            // affine transform) and build up the composite:  there is a convenient "rotate about
            // a point" method, since this is a common operation, which just takes the rotation
            // angle and the point and sets up the rotation:
            //g2.rotate(radianrot, x, y);



            // Now that the transform is established in the graphics context, do the draw
            // of the off-screen buffered image into the onscreen "filteredbim" object,
            // which the paint() method is redrawing
            g2.setColor(new Color(0,0,0));
            g2.drawImage(bim, 0, 0, null);
            g2.dispose();

            showfiltered=true;
            this.repaint();
        }

        //  show current image by a scheduled call to paint()
        public void showImage() {
            if (bim == null) return;
            showfiltered=false;
            this.repaint();
        }

        //  get a graphics context and show either filtered image or
        //  regular image
        public void paintComponent(Graphics g) {
            Graphics2D big = (Graphics2D) g;
            if (showfiltered)
                big.drawImage(filteredbim, 0, 0, this);
            else
                big.drawImage(bim, 0, 0, this);
        }
    }

}
