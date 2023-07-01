#include <iostream>
using namespace std;


class SedukoGame {
public:

    void displayBoard(int board[9][9], int width, int height) {

        for (int i = 0; i < height; ++i)
        {
            for (int j = 0; j < width; ++j)
            {
                cout << board[i][j] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }


    void showOptions() {
        cout << "Show Instructions Again: S\n";
        cout << "Display Board: D\n";
        cout << "Edit Board: E\n";
        cout << "End Game: G\n\n";
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


    SedukoGame sedukoObj; // Create an object for SedukoGame

    sedukoObj.showOptions();
    sedukoObj.displayBoard(board, width, height);


    //displayBoard(board, width, height);



    return 0;
}