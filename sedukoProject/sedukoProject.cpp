#include <iostream>
#include <string>
#include <fstream>
using namespace std;


class SedukoGame {
public:

    void readFile() {

    }


    void displayBoard(int board[9][9], int width, int height) {

        int count = 1;
        int SideNumber = 2;
        string BoardSectionDivisor = "  -+-+-+-+-+-+-+-+-\n";

        cout << "  1 2 3 4 5 6 7 8 9\n1 ";

        for (int i = 0; i < height; ++i)
        {
            for (int j = 0; j < width; ++j)
            {
                if (board[i][j] == 0) {
                    cout << " ";
                }
                else {
                    cout << board[i][j];
                }

                if (count % 9 == 0) {
                    cout << endl;
                    if (SideNumber < 10) {
                        cout << BoardSectionDivisor << SideNumber++ << " ";
                    }
                }
                else {
                    cout << "|";
                }
                count++;
            }
        }
        cout << endl;
    }

    void editCell(int board[9][9], int width, int height) {

        string col;
        cout << "What column would you like to edit: ";
        cin >> col;

        string row;
        cout << "What row would you like to edit: ";
        cin >> row;

        cout << "Editing Cells " << col << " " << row << endl;

        string value;
        cout << "New Value: ";
        cin >> value;

        int editCol = stoi(col) - 1;
        int editRow = stoi(row) - 1;
        int newValue = stoi(value);

        board[editRow][editCol] = newValue;

        displayBoard(board, width, height);
    }


    void showOptions() {
        cout << "Show Instructions Again: 1\n";
        cout << "Display Board: 2\n";
        cout << "Edit Board: 3\n";
        cout << "End Game: 4\n\n";
    }


    int userInput() {

        string input;
        cout << "> ";
        cin >> input;

        int intInput = stoi(input);

        return intInput;
    }


    void gameRunner(bool runGame, int board[9][9], int width, int height) {
        while (runGame == true) {
            switch (userInput()) {
            case 1:
                showOptions();
                break;
            case 2:
                displayBoard(board, width, height);
                break;
            case 3:
                editCell(board, width, height);
                break;
            case 4:
                cout << "END GAME!\n";
                runGame = false;
                break;
            }
        }
    }
};


int main()
{
    int board[9][9] = {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };
    int width = 9, height = 9;

    bool gameRun = true;

    SedukoGame sedukoObj; // Create an object for SedukoGame

    sedukoObj.showOptions();
    sedukoObj.displayBoard(board, width, height);
    sedukoObj.gameRunner(gameRun, board, width, height);

    return 0;
}