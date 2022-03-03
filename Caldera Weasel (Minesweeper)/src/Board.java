import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.util.Random;
import javax.swing.*;

public class Board extends JPanel {

    private final int NUM_IMAGES = 13;  //Number of images used
    private final int CELL_SIZE = 15;   //Size of cells (15x15 px)

    private final int COVER_FOR_CELL = 10;  //Covered cell
    private final int MARK_FOR_CELL = 10;   //Marked cell
    private final int EMPTY_CELL = 0;       //Empty cell
    private final int THERMAL_TRAP_CELL = 9;        //Cell that contains thermal trap
    private final int COVERED_MINE_CELL = THERMAL_TRAP_CELL + COVER_FOR_CELL;           //Covered and contains thermal trap
    private final int MARKED_MINE_CELL = COVERED_MINE_CELL + MARK_FOR_CELL;     //Covered thermal trap that is marked

    private final int DRAW_TRAP = 9;        //Draw thermal trap
    private final int DRAW_COVER = 10;      //Draw thermal trap cover
    private final int DRAW_MARK = 11;       //Draw mark
    private final int DRAW_WRONG_MARK = 12; //Draw wrongly marked

    //EASY
    private final int EASY_N_TRAPS = 5;     //Number of thermal trap
    private final int EASY_N_ROWS = 4;      //Number of rows
    private final int EASY_N_COLS = 4;       //Number of columns

    private final int EASY_BOARD_WIDTH = EASY_N_COLS * CELL_SIZE + 1;     //Board width
    private final int EASY_BOARD_HEIGHT = EASY_N_ROWS * CELL_SIZE + 25;    //Board height
    //INTERMEDIATE
    private final int MEDIUM_N_TRAPS = 14;     //Number of thermal trap
    private final int MEDIUM_N_ROWS = 8;      //Number of rows
    private final int MEDIUM_N_COLS = 8;       //Number of columns

    private final int MEDIUM_BOARD_WIDTH = MEDIUM_N_COLS * CELL_SIZE + 1;     //Board width
    private final int MEDIUM_BOARD_HEIGHT = MEDIUM_N_ROWS * CELL_SIZE + 25;    //Board height
    //HARD
    private final int EXPERT_N_TRAPS = 60;     //Number of thermal trap
    private final int EXPERT_N_ROWS = 15;      //Number of rows
    private final int EXPERT_N_COLS = 15;      //Number of columns

    private final int EXPERT_BOARD_WIDTH = EXPERT_N_COLS * CELL_SIZE + 1;     //Board width
    private final int EXPERT_BOARD_HEIGHT = EXPERT_N_ROWS * CELL_SIZE + 25;    //Board height

    private int[] field;    //Array of cell numbers
    private boolean inGame; //Bool for if game is over or not
    private boolean firstClick; //Bool for if a cell has been clicked yet
    private int trapsLeft;  //Number of thermal trap to be marked left
    private Image[] img;    //Image array

    private int allCells;   //Total number of cells
    private final JLabel status;    //Number of thermal trap left unmarked
    private final JLabel timer;     //Keeps track of time since start (seconds)
    private int time;           //number of seconds since game start
    private Timer t;            //game timer
    private final int diff;     //1 for beginner/easy
                                //2 for intermediate/medium
                                //3 for expert/hard

    public Board(JLabel status, JLabel timer, int diff) {
        this.status = status;
        this.timer = timer;
        this.diff = diff;
        initBoard();
    }

    private void initBoard() {
        //EASY
        if (diff == 1) {
            setPreferredSize(new Dimension(EASY_BOARD_WIDTH, EASY_BOARD_HEIGHT));
        }
        //MEDIUM
        else if (diff == 2) {
            setPreferredSize(new Dimension(MEDIUM_BOARD_WIDTH, MEDIUM_BOARD_HEIGHT));
        }
        //HARD
        else if (diff == 3) {
            setPreferredSize(new Dimension(EXPERT_BOARD_WIDTH, EXPERT_BOARD_HEIGHT));
        }
        img = new Image[NUM_IMAGES];

        //Load images into image array
        for (int i = 0; i < NUM_IMAGES; i++) {
            //String path = "src/resources/" + i + ".png";
            //img[i] = (new ImageIcon(path)).getImage();
            img[i] = (new ImageIcon(this.getClass().getResource("resources/" + i + ".png"))).getImage();
        }
        addMouseListener(new MinesAdapter());
        //Initiates game
        newGame();
    }

    private void newGame() {
        int cell;
        Random random = new Random();
        inGame = true;
        firstClick = true;
        if (diff == 1) {
            trapsLeft = EASY_N_TRAPS;
            allCells = EASY_N_ROWS * EASY_N_COLS; //Total number of cells (rows x columns)
        }
        else if (diff == 2) {
            trapsLeft = MEDIUM_N_TRAPS;
            allCells = MEDIUM_N_ROWS * MEDIUM_N_COLS; //Total number of cells (rows x columns)
        }
        else if (diff == 3) {
            trapsLeft = EXPERT_N_TRAPS;
            allCells = EXPERT_N_ROWS * EXPERT_N_COLS; //Total number of cells (rows x columns)
        }

        field = new int[allCells];  //Array of all cell numbers

        //Cover all cells by default
        for (int i = 0; i < allCells; i++) {
            field[i] = COVER_FOR_CELL;
        }

        //set labels text
        status.setText("Flags left: " + Integer.toString(trapsLeft));
        //start timer
        time = 0;
        timer.setText("Time: " + time);
        //set up the timer
        t = new Timer(1000, new ActionListener() {
            public void actionPerformed(ActionEvent ae) {
                //increment by one second every second
                time++;
                timer.setText("Time: " + time);
                //System.out.println(time);
            }
        });
        //t.start();

        //EASY
        if (diff == 1) {
            int i = 0;
            //Randomly insert all thermal traps into field
            while (i < EASY_N_TRAPS) {
                int position = (int) (allCells * random.nextDouble());
                if ((position < allCells) && (field[position] != COVERED_MINE_CELL)) {
                    int current_col = position % EASY_N_COLS;
                    field[position] = COVERED_MINE_CELL;
                    i++;

                    //raise the number for adjacent cells
                    //for each thermal trap
                    if (current_col > 0) {
                        cell = position - 1 - EASY_N_COLS;
                        if (cell >= 0) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }
                        cell = position - 1;
                        if (cell >= 0) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }

                        cell = position + EASY_N_COLS - 1;
                        if (cell < allCells) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }
                    }

                    cell = position - EASY_N_COLS;
                    if (cell >= 0) {
                        if (field[cell] != COVERED_MINE_CELL) {
                            field[cell] += 1;
                        }
                    }

                    cell = position + EASY_N_COLS;
                    if (cell < allCells) {
                        if (field[cell] != COVERED_MINE_CELL) {
                            field[cell] += 1;
                        }
                    }

                    if (current_col < (EASY_N_COLS - 1)) {
                        cell = position - EASY_N_COLS + 1;
                        if (cell >= 0) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }
                        cell = position + EASY_N_COLS + 1;
                        if (cell < allCells) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }
                        cell = position + 1;
                        if (cell < allCells) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }
                    }
                }
            }
        }
        //MEDIUM
        else if (diff == 2) {
            int i = 0;
            //Randomly insert all thermal traps into field
            while (i < MEDIUM_N_TRAPS) {
                int position = (int) (allCells * random.nextDouble());
                if ((position < allCells) && (field[position] != COVERED_MINE_CELL)) {
                    int current_col = position % MEDIUM_N_COLS;
                    field[position] = COVERED_MINE_CELL;
                    i++;

                    //raise the number for adjacent cells
                    //for each thermal trap
                    if (current_col > 0) {
                        cell = position - 1 - MEDIUM_N_COLS;
                        if (cell >= 0) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }
                        cell = position - 1;
                        if (cell >= 0) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }

                        cell = position + MEDIUM_N_COLS - 1;
                        if (cell < allCells) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }
                    }

                    cell = position - MEDIUM_N_COLS;
                    if (cell >= 0) {
                        if (field[cell] != COVERED_MINE_CELL) {
                            field[cell] += 1;
                        }
                    }

                    cell = position + MEDIUM_N_COLS;
                    if (cell < allCells) {
                        if (field[cell] != COVERED_MINE_CELL) {
                            field[cell] += 1;
                        }
                    }

                    if (current_col < (MEDIUM_N_COLS - 1)) {
                        cell = position - MEDIUM_N_COLS + 1;
                        if (cell >= 0) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }
                        cell = position + MEDIUM_N_COLS + 1;
                        if (cell < allCells) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }
                        cell = position + 1;
                        if (cell < allCells) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }
                    }
                }
            }
        }
        //HARD
        else if (diff == 3) {
            int i = 0;
            //Randomly insert all thermal traps into field
            while (i < EXPERT_N_TRAPS) {
                int position = (int) (allCells * random.nextDouble());
                if ((position < allCells) && (field[position] != COVERED_MINE_CELL)) {
                    int current_col = position % EXPERT_N_COLS;
                    field[position] = COVERED_MINE_CELL;
                    i++;

                    //raise the number for adjacent cells
                    //for each thermal trap
                    if (current_col > 0) {
                        cell = position - 1 - EXPERT_N_COLS;
                        if (cell >= 0) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }
                        cell = position - 1;
                        if (cell >= 0) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }

                        cell = position + EXPERT_N_COLS - 1;
                        if (cell < allCells) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }
                    }

                    cell = position - EXPERT_N_COLS;
                    if (cell >= 0) {
                        if (field[cell] != COVERED_MINE_CELL) {
                            field[cell] += 1;
                        }
                    }

                    cell = position + EXPERT_N_COLS;
                    if (cell < allCells) {
                        if (field[cell] != COVERED_MINE_CELL) {
                            field[cell] += 1;
                        }
                    }

                    if (current_col < (EXPERT_N_COLS - 1)) {
                        cell = position - EXPERT_N_COLS + 1;
                        if (cell >= 0) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }
                        cell = position + EXPERT_N_COLS + 1;
                        if (cell < allCells) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }
                        cell = position + 1;
                        if (cell < allCells) {
                            if (field[cell] != COVERED_MINE_CELL) {
                                field[cell] += 1;
                            }
                        }
                    }
                }
            }
        }
    }


    //Find empty cells
    private void find_empty_cells(int j) {
        //EASY
        if (diff == 1) {
            int current_col = j % EASY_N_COLS;
            int cell;

            //check surrounding cells
            //if not empty, it is uncovered
            //if it is empty, recursively call method
            if (current_col > 0) {
                cell = j - EASY_N_COLS - 1;
                if (cell >= 0) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }

                cell = j - 1;
                if (cell >= 0) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }

                cell = j + EASY_N_COLS - 1;
                if (cell < allCells) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }
            }

            cell = j - EASY_N_COLS;
            if (cell >= 0) {
                if (field[cell] > THERMAL_TRAP_CELL) {
                    field[cell] -= COVER_FOR_CELL;
                    if (field[cell] == EMPTY_CELL) {
                        find_empty_cells(cell);
                    }
                }
            }

            cell = j + EASY_N_COLS;
            if (cell < allCells) {
                if (field[cell] > THERMAL_TRAP_CELL) {
                    field[cell] -= COVER_FOR_CELL;
                    if (field[cell] == EMPTY_CELL) {
                        find_empty_cells(cell);
                    }
                }
            }

            if (current_col < (EASY_N_COLS - 1)) {
                cell = j - EASY_N_COLS + 1;
                if (cell >= 0) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }

                cell = j + EASY_N_COLS + 1;
                if (cell < allCells) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }

                cell = j + 1;
                if (cell < allCells) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }
            }
        }
        //MEDIUM
        else if (diff == 2) {
            int current_col = j % MEDIUM_N_COLS;
            int cell;

            //check surrounding cells
            //if not empty, it is uncovered
            //if it is empty, recursively call method
            if (current_col > 0) {
                cell = j - MEDIUM_N_COLS - 1;
                if (cell >= 0) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }

                cell = j - 1;
                if (cell >= 0) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }

                cell = j + MEDIUM_N_COLS - 1;
                if (cell < allCells) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }
            }

            cell = j - MEDIUM_N_COLS;
            if (cell >= 0) {
                if (field[cell] > THERMAL_TRAP_CELL) {
                    field[cell] -= COVER_FOR_CELL;
                    if (field[cell] == EMPTY_CELL) {
                        find_empty_cells(cell);
                    }
                }
            }

            cell = j + MEDIUM_N_COLS;
            if (cell < allCells) {
                if (field[cell] > THERMAL_TRAP_CELL) {
                    field[cell] -= COVER_FOR_CELL;
                    if (field[cell] == EMPTY_CELL) {
                        find_empty_cells(cell);
                    }
                }
            }

            if (current_col < (MEDIUM_N_COLS - 1)) {
                cell = j - MEDIUM_N_COLS + 1;
                if (cell >= 0) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }

                cell = j + MEDIUM_N_COLS + 1;
                if (cell < allCells) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }

                cell = j + 1;
                if (cell < allCells) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }
            }
        }
        //HARD
        else if (diff == 3) {
            int current_col = j % EXPERT_N_COLS;
            int cell;

            //check surrounding cells
            //if not empty, it is uncovered
            //if it is empty, recursively call method
            if (current_col > 0) {
                cell = j - EXPERT_N_COLS - 1;
                if (cell >= 0) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }

                cell = j - 1;
                if (cell >= 0) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }

                cell = j + EXPERT_N_COLS - 1;
                if (cell < allCells) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }
            }

            cell = j - EXPERT_N_COLS;
            if (cell >= 0) {
                if (field[cell] > THERMAL_TRAP_CELL) {
                    field[cell] -= COVER_FOR_CELL;
                    if (field[cell] == EMPTY_CELL) {
                        find_empty_cells(cell);
                    }
                }
            }

            cell = j + EXPERT_N_COLS;
            if (cell < allCells) {
                if (field[cell] > THERMAL_TRAP_CELL) {
                    field[cell] -= COVER_FOR_CELL;
                    if (field[cell] == EMPTY_CELL) {
                        find_empty_cells(cell);
                    }
                }
            }

            if (current_col < (EXPERT_N_COLS - 1)) {
                cell = j - EXPERT_N_COLS + 1;
                if (cell >= 0) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }

                cell = j + EXPERT_N_COLS + 1;
                if (cell < allCells) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }

                cell = j + 1;
                if (cell < allCells) {
                    if (field[cell] > THERMAL_TRAP_CELL) {
                        field[cell] -= COVER_FOR_CELL;
                        if (field[cell] == EMPTY_CELL) {
                            find_empty_cells(cell);
                        }
                    }
                }
            }
        }
    }

    @Override
    public void paintComponent(Graphics g) {
        //EASY
        if (diff == 1) {
            int uncover = 0;
            for (int i = 0; i < EASY_N_ROWS; i++) {
                for (int j = 0; j < EASY_N_COLS; j++) {
                    int cell = field[(i * EASY_N_COLS) + j];

                    //if thermal trap is clicked on, game is over
                    if (inGame && cell == THERMAL_TRAP_CELL) {
                        inGame = false;
                    }

                    //If game is over and player lost, show
                    //all uncovered thermal traps (if any) and show
                    //all wrongly marked cells (if any)
                    if (!inGame) {
                        //show thermal traps
                        if (cell == COVERED_MINE_CELL) {
                            cell = DRAW_TRAP;
                        }
                        //if thermal trap is marked, keep mark
                        else if (cell == MARKED_MINE_CELL) {
                            cell = DRAW_MARK;
                        }
                        //show wrongly marked cells
                        else if (cell > COVERED_MINE_CELL) {
                            cell = DRAW_WRONG_MARK;
                        }
                        else if (cell > THERMAL_TRAP_CELL) {
                            cell = DRAW_COVER;
                        }
                    }
                    else {
                        if (cell > COVERED_MINE_CELL) {
                            cell = DRAW_MARK;
                        }
                        else if (cell > THERMAL_TRAP_CELL) {
                            cell = DRAW_COVER;
                            uncover++;
                        }
                    }
                    //Draw all cells
                    g.drawImage(img[cell], (j * CELL_SIZE),
                            (i * CELL_SIZE), this);
                }
            }

            //if all thermal traps are marked and
            //game is not over, then player wins
            if (uncover == 0 && inGame) {
                inGame = false;
                status.setText("You won!");
                t.stop();
            }
            //Game is over
            else if (!inGame) {
                status.setText("Game Over!");
                t.stop();
            }
        }
        //MEDIUM
        else if (diff == 2) {
            int uncover = 0;
            for (int i = 0; i < MEDIUM_N_ROWS; i++) {
                for (int j = 0; j < MEDIUM_N_COLS; j++) {
                    int cell = field[(i * MEDIUM_N_COLS) + j];

                    //if thermal trap is clicked on, game is over
                    if (inGame && cell == THERMAL_TRAP_CELL) {
                        inGame = false;
                    }

                    //If game is over and player lost, show
                    //all uncovered thermal traps (if any) and show
                    //all wrongly marked cells (if any)
                    if (!inGame) {
                        //show thermal traps
                        if (cell == COVERED_MINE_CELL) {
                            cell = DRAW_TRAP;
                        }
                        //if thermal trap is marked, keep mark
                        else if (cell == MARKED_MINE_CELL) {
                            cell = DRAW_MARK;
                        }
                        //show wrongly marked cells
                        else if (cell > COVERED_MINE_CELL) {
                            cell = DRAW_WRONG_MARK;
                        }
                        else if (cell > THERMAL_TRAP_CELL) {
                            cell = DRAW_COVER;
                        }
                    }
                    else {
                        if (cell > COVERED_MINE_CELL) {
                            cell = DRAW_MARK;
                        }
                        else if (cell > THERMAL_TRAP_CELL) {
                            cell = DRAW_COVER;
                            uncover++;
                        }
                    }
                    //Draw all cells
                    g.drawImage(img[cell], (j * CELL_SIZE),
                            (i * CELL_SIZE), this);
                }
            }

            //if all thermal traps are marked and
            //game is not over, then player wins
            if (uncover == 0 && inGame) {
                inGame = false;
                status.setText("You won!");
                t.stop();
            }
            //Game is over
            else if (!inGame) {
                status.setText("Game Over!");
                t.stop();
            }
        }
        //HARD
        else if (diff == 3) {
            int uncover = 0;
            for (int i = 0; i < EXPERT_N_ROWS; i++) {
                for (int j = 0; j < EXPERT_N_COLS; j++) {
                    int cell = field[(i * EXPERT_N_COLS) + j];

                    //if thermal trap is clicked on, game is over
                    if (inGame && cell == THERMAL_TRAP_CELL) {
                        inGame = false;
                    }

                    //If game is over and player lost, show
                    //all uncovered thermal traps (if any) and show
                    //all wrongly marked cells (if any)
                    if (!inGame) {
                        //show thermal traps
                        if (cell == COVERED_MINE_CELL) {
                            cell = DRAW_TRAP;
                        }
                        //if thermal trap is marked, keep mark
                        else if (cell == MARKED_MINE_CELL) {
                            cell = DRAW_MARK;
                        }
                        //show wrongly marked cells
                        else if (cell > COVERED_MINE_CELL) {
                            cell = DRAW_WRONG_MARK;
                        }
                        else if (cell > THERMAL_TRAP_CELL) {
                            cell = DRAW_COVER;
                        }
                    }
                    else {
                        if (cell > COVERED_MINE_CELL) {
                            cell = DRAW_MARK;
                        }
                        else if (cell > THERMAL_TRAP_CELL) {
                            cell = DRAW_COVER;
                            uncover++;
                        }
                    }
                    //Draw all cells
                    g.drawImage(img[cell], (j * CELL_SIZE),
                            (i * CELL_SIZE), this);
                }
            }

            //if all thermal traps are marked and
            //game is not over, then player wins
            if (uncover == 0 && inGame) {
                inGame = false;
                status.setText("You won!");
                t.stop();
            }
            //Game is over
            else if (!inGame) {
                status.setText("Game Over!");
                t.stop();
            }
        }
    }

    private class MinesAdapter extends MouseAdapter {
        @Override
        public void mousePressed(MouseEvent e) {
            //get x coordinate of mouse pointer
            int x = e.getX();
            //get y coordinate of mouse pointer
            int y = e.getY();

            int cCol = x / CELL_SIZE;   //get column
            int cRow = y / CELL_SIZE;   //get row

            boolean doRepaint = false;

            if (!inGame) {
                newGame();
                repaint();
            }

            //EASY
            if (diff == 1) {
                //check that click is in the field
                if ((x < EASY_N_COLS * CELL_SIZE) && (y < EASY_N_ROWS * CELL_SIZE)) {
                    //if right mouse button clicked
                    if (e.getButton() == MouseEvent.BUTTON3) {
                        if (field[(cRow * EASY_N_COLS) + cCol] > THERMAL_TRAP_CELL) {
                            doRepaint = true;
                            if (field[(cRow * EASY_N_COLS) + cCol] <= COVERED_MINE_CELL) {
                                if (trapsLeft > 0) {
                                    //add flag to right-clicked cell
                                    field[(cRow * EASY_N_COLS) + cCol] += MARK_FOR_CELL;
                                    //decrease number of mines left by 1
                                    trapsLeft--;
                                    String msg = Integer.toString(trapsLeft);
                                    status.setText("Flags left: " + msg);
                                }
                                //if all flags have been used
                                else {
                                    status.setText("No marks left");
                                }
                            }
                            else {
                                //if cell already flagged, remove flag
                                field[(cRow * EASY_N_COLS) + cCol] -= MARK_FOR_CELL;
                                //increase number of thermal traps left by 1
                                trapsLeft++;
                                String msg = Integer.toString(trapsLeft);
                                status.setText("Flags left: " + msg);
                            }
                        }
                    }
                    //Left-click
                    else {
                        //if cell is covered and marked, nothing happens
                        if (field[(cRow * EASY_N_COLS) + cCol] > COVERED_MINE_CELL) {
                            return;
                        }
                        if ((field[(cRow * EASY_N_COLS) + cCol] > THERMAL_TRAP_CELL) && (field[(cRow * EASY_N_COLS) + cCol] < MARKED_MINE_CELL)) {
                            //remove cover
                            field[(cRow * EASY_N_COLS) + cCol] -= COVER_FOR_CELL;
                            doRepaint = true;
                            //if you have already clicked on at least cell, game is over
                            if (field[(cRow * EASY_N_COLS) + cCol] == THERMAL_TRAP_CELL && !firstClick) {
                                inGame = false;
                            }
                            //if you haven't clicked on a cell yet, and the first click is on a thermal trap,
                            //"THERMAL TRAP HERE!" will display at the bottom
                            else if (field[(cRow * EASY_N_COLS) + cCol] == THERMAL_TRAP_CELL && firstClick) {
                                field[(cRow * EASY_N_COLS) + cCol] += MARK_FOR_CELL;
                                status.setText("THERMAL TRAP HERE!");
                            }
                            //set firstClick to false after first click
                            //start timer
                            if (firstClick) {
                                firstClick = false;
                                t.start();
                            }
                            //if empty cell is clicked on,
                            //recursively find all adjacent empty cells
                            if (field[(cRow * EASY_N_COLS) + cCol] == EMPTY_CELL) {
                                find_empty_cells((cRow * EASY_N_COLS) + cCol);
                            }
                        }
                    }
                    //if board needs to be changed,
                    //call repaint()
                    if (doRepaint) {
                        repaint();
                    }
                }
            }
            //MEDIUM
            else if (diff == 2) {
                //check that click is in the field
                if ((x < MEDIUM_N_COLS * CELL_SIZE) && (y < MEDIUM_N_ROWS * CELL_SIZE)) {
                    //if right mouse button clicked
                    if (e.getButton() == MouseEvent.BUTTON3) {
                        if (field[(cRow * MEDIUM_N_COLS) + cCol] > THERMAL_TRAP_CELL) {
                            doRepaint = true;
                            if (field[(cRow * MEDIUM_N_COLS) + cCol] <= COVERED_MINE_CELL) {
                                if (trapsLeft > 0) {
                                    //add flag to right-clicked cell
                                    field[(cRow * MEDIUM_N_COLS) + cCol] += MARK_FOR_CELL;
                                    //decrease number of thermal traps left by 1
                                    trapsLeft--;
                                    String msg = Integer.toString(trapsLeft);
                                    status.setText("Flags left: " + msg);
                                }
                                //if all flags have been used
                                else {
                                    status.setText("No marks left");
                                }
                            }
                            else {
                                //if cell already flagged, remove flag
                                field[(cRow * MEDIUM_N_COLS) + cCol] -= MARK_FOR_CELL;
                                //increase number of thermal traps left by 1
                                trapsLeft++;
                                String msg = Integer.toString(trapsLeft);
                                status.setText("Flags left: " + msg);
                            }
                        }
                    }
                    //Left-click
                    else {
                        //if cell is covered and marked, nothing happens
                        if (field[(cRow * MEDIUM_N_COLS) + cCol] > COVERED_MINE_CELL) {
                            return;
                        }
                        if ((field[(cRow * MEDIUM_N_COLS) + cCol] > THERMAL_TRAP_CELL) && (field[(cRow * MEDIUM_N_COLS) + cCol] < MARKED_MINE_CELL)) {
                            //remove cover
                            field[(cRow * MEDIUM_N_COLS) + cCol] -= COVER_FOR_CELL;
                            doRepaint = true;
                            //if you have already clicked on at least cell, game is over
                            if (field[(cRow * MEDIUM_N_COLS) + cCol] == THERMAL_TRAP_CELL && !firstClick) {
                                inGame = false;
                            }
                            //if you haven't clicked on a cell yet, and the first click is on a thermal trap,
                            //"THERMAL TRAP HERE!" will display at the bottom
                            else if (field[(cRow * MEDIUM_N_COLS) + cCol] == THERMAL_TRAP_CELL && firstClick) {
                                field[(cRow * MEDIUM_N_COLS) + cCol] += MARK_FOR_CELL;
                                status.setText("THERMAL TRAP HERE!");
                            }
                            //set firstClick to false after first click
                            //start timer
                            if (firstClick) {
                                firstClick = false;
                                t.start();
                            }
                            //if empty cell is clicked on,
                            //recursively find all adjacent empty cells
                            if (field[(cRow * MEDIUM_N_COLS) + cCol] == EMPTY_CELL) {
                                find_empty_cells((cRow * MEDIUM_N_COLS) + cCol);
                            }
                        }
                    }
                    //if board needs to be changed,
                    //call repaint()
                    if (doRepaint) {
                        repaint();
                    }
                }
            }
            //HARD
            else if (diff == 3) {
                //check that click is in the field
                if ((x < EXPERT_N_COLS * CELL_SIZE) && (y < EXPERT_N_ROWS * CELL_SIZE)) {
                    //if right mouse button clicked
                    if (e.getButton() == MouseEvent.BUTTON3) {
                        if (field[(cRow * EXPERT_N_COLS) + cCol] > THERMAL_TRAP_CELL) {
                            doRepaint = true;
                            if (field[(cRow * EXPERT_N_COLS) + cCol] <= COVERED_MINE_CELL) {
                                if (trapsLeft > 0) {
                                    //add flag to right-clicked cell
                                    field[(cRow * EXPERT_N_COLS) + cCol] += MARK_FOR_CELL;
                                    //decrease number of thermal traps left by 1
                                    trapsLeft--;
                                    String msg = Integer.toString(trapsLeft);
                                    status.setText("Flags left: " + msg);
                                }
                                //if all flags have been used
                                else {
                                    status.setText("No marks left");
                                }
                            }
                            else {
                                //if cell already flagged, remove flag
                                field[(cRow * EXPERT_N_COLS) + cCol] -= MARK_FOR_CELL;
                                //increase number of thermal traps left by 1
                                trapsLeft++;
                                String msg = Integer.toString(trapsLeft);
                                status.setText("Flags left: " + msg);
                            }
                        }
                    }
                    //Left-click
                    else {
                        //if cell is covered and marked, nothing happens
                        if (field[(cRow * EXPERT_N_COLS) + cCol] > COVERED_MINE_CELL) {
                            return;
                        }
                        if ((field[(cRow * EXPERT_N_COLS) + cCol] > THERMAL_TRAP_CELL) && (field[(cRow * EXPERT_N_COLS) + cCol] < MARKED_MINE_CELL)) {
                            //remove cover
                            field[(cRow * EXPERT_N_COLS) + cCol] -= COVER_FOR_CELL;
                            doRepaint = true;
                            //if you have already clicked on at least cell, game is over
                            if (field[(cRow * EXPERT_N_COLS) + cCol] == THERMAL_TRAP_CELL && !firstClick) {
                                inGame = false;
                            }
                            //if you haven't clicked on a cell yet, and the first click is on a thermal trap,
                            //"THERMAL TRAP HERE!" will display at the bottom
                            else if (field[(cRow * EXPERT_N_COLS) + cCol] == THERMAL_TRAP_CELL && firstClick) {
                                field[(cRow * EXPERT_N_COLS) + cCol] += MARK_FOR_CELL;
                                status.setText("THERMAL TRAP HERE!");
                            }
                            //set firstClick to false after first click
                            //start timer
                            if (firstClick) {
                                firstClick = false;
                                t.start();
                            }
                            //if empty cell is clicked on,
                            //recursively find all adjacent empty cells
                            if (field[(cRow * EXPERT_N_COLS) + cCol] == EMPTY_CELL) {
                                find_empty_cells((cRow * EXPERT_N_COLS) + cCol);
                            }
                        }
                    }
                    //if board needs to be changed,
                    //call repaint()
                    if (doRepaint) {
                        repaint();
                    }
                }
            }
        }
    }
}
