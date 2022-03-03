import java.awt.BorderLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class CWeasel extends JFrame {
    private JLabel status;
    private JLabel timer;

    public CWeasel(int diff) {
        status = new JLabel("");
        timer = new JLabel("");
        add(status, BorderLayout.SOUTH);
        add(timer, BorderLayout.NORTH);
        add(new Board(status, timer, diff));
        setResizable(false);    //cannot change size of window
        pack();
        setTitle("Caldera Weasel");
        setLocationRelativeTo(null);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    //Sets up menu bar
    public static JMenuBar setMenuBar(CWeasel cw, int diff) {
        //Set menu bar
        JMenuBar menubar = new JMenuBar();
        //Settings
        JMenu settings = new JMenu("Settings");
        JMenuItem easy = new JMenuItem("Beginner");
        easy.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                cw.setVisible(false);   //hide current game
                int easy = 1;
                CWeasel cw = new CWeasel(easy);
                JMenuBar menubar = setMenuBar(cw, easy);
                cw.setJMenuBar(menubar);
                cw.setVisible(true);
            }
        });
        JMenuItem intermediate = new JMenuItem("Intermediate");
        intermediate.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                cw.setVisible(false);   //hide current game
                int medium = 2;
                CWeasel cw = new CWeasel(medium);
                JMenuBar menubar = setMenuBar(cw, medium);
                cw.setJMenuBar(menubar);
                cw.setVisible(true);
            }
        });
        JMenuItem hard = new JMenuItem("Expert");
        hard.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                cw.setVisible(false);   //hide current game
                int hard = 3;
                CWeasel cw = new CWeasel(hard);
                JMenuBar menubar = setMenuBar(cw, hard);
                cw.setJMenuBar(menubar);
                cw.setVisible(true);
            }
        });
        //JMenu options = new JMenu("Options");
        JMenuItem help = new JMenuItem("Help");
        help.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                JOptionPane.showMessageDialog(null,
                        "If you left click on a cell and it reveals a number, that is the " +
                                "number of thermal traps in the surrounding cells." +
                                "\nIf you left click on a cell without any thermal traps around it, " +
                                "it will reveal all other empty cells around it." +
                                "\nIf you right click on a cell, it will leave a flag marker " +
                                "and make it so you can't left click on it." +
                                "\nIf you right click on a cell already flagged, it will remove the flag." +
                                "\nThe first left click will notify if a thermal trap has been clicked. " +
                                "It will say THERMAL TRAP HERE! at the bottom of the window. " +
                                "(You should use right click to place a flag there.)" +
                                "\nFlagging all of the thermal trap locations and revealing all non-trap cells will win the game." +
                                "\nThe number of flags remaining is indicated at the bottom left, " +
                                "and the timer at at the top left." +
                                "\nAll options for the game are located under the Settings menu." +
                                "\nIf the current settings is too hard for you, you can " +
                                "click on the top left menu item named Settings and select " +
                                " an easier settings." +
                                "\nWhen a game ends, you can either use the reset button " +
                                "or click on a cell to start the game again.",
                        "Help", JOptionPane.INFORMATION_MESSAGE);
            }
        });
        JMenuItem reset = new JMenuItem("Reset");
        reset.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                cw.setVisible(false);   //hide current game
                CWeasel cw = new CWeasel(diff);
                JMenuBar menubar = setMenuBar(cw, diff);
                cw.setJMenuBar(menubar);
                cw.setVisible(true);
            }
        });
        JMenuItem quit = new JMenuItem("Quit");
        quit.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.exit(0);
            }
        });
        //Add difficulties to menu
        settings.add(easy);
        settings.add(intermediate);
        settings.add(hard);
        //Add options to menu
        settings.add(help);
        settings.add(reset);
        settings.add(quit);
        //Add to menubar
        menubar.add(settings);
        return menubar;
    }

    public static void main(String[] args) {
        int easy = 1;
        int intermediate = 2;
        int hard = 3;
        int diff = hard;    //default difficulty
        CWeasel cw = new CWeasel(diff);
        JMenuBar menubar = setMenuBar(cw, diff);
        cw.setJMenuBar(menubar);
        cw.setVisible(true);
    }
}