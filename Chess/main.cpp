#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include "pieces.cpp"

#define RESET   "\x1b[0m"

//teest

using namespace std;

void print_board(vector<vector<string>> &board);
void init_board(vector<vector<string>> &board);
void clear_screen();

int main(){
    Board myBoard = Board();
    while(true){
        myBoard.print_board();
        //cout << "Memes!!!" << endl;
        cin.get();
        clear_screen();
        //cin.get();
    }
    
}
void init_board(vector<vector<string>> &board){
    vector<string> line1;
    line1.push_back("\u2656");
    //line1.push_back("♜");
    line1.push_back("\u2658");
    line1.push_back("\u2657");
    line1.push_back("\u2655");
    line1.push_back("\u2654");
    line1.push_back("\u2657");
    line1.push_back("\u2658");
    line1.push_back("\u2656");
    board.push_back(line1);
    vector<string> line2;
    line2.push_back("\u2659");
    line2.push_back("\u2659");
    line2.push_back("\u2659");
    line2.push_back("\u2659");
    line2.push_back("\u2659");
    line2.push_back("\u2659");
    line2.push_back("\u2659");
    line2.push_back("\u2659");
    board.push_back(line2);
    vector<string> empty;
    empty.push_back(" ");
    empty.push_back(" ");
    empty.push_back(" ");
    empty.push_back(" ");
    empty.push_back(" ");
    empty.push_back(" ");
    empty.push_back(" ");
    empty.push_back(" ");
    for(int i = 0; i < 4; i++){
        board.push_back(empty);
    }
    vector<string> line7;
    line7.push_back("\u265F");
    line7.push_back("\u265F");
    line7.push_back("\u265F");
    line7.push_back("\u265F");
    line7.push_back("\u265F");
    line7.push_back("\u265F");
    line7.push_back("\u265F");
    line7.push_back("\u265F");
    board.push_back(line7);
    vector<string> line8;
    line8.push_back("\u265C");
    line8.push_back("\u265E");
    line8.push_back("\u265D");
    line8.push_back("\u265B");
    line8.push_back("\u265A");
    line8.push_back("\u265D");
    line8.push_back("\u265E");
    line8.push_back("\u265C");
    board.push_back(line8);
}

void print_board(vector<vector<string>> &board){
        cout << "    A    B    C    D    E    F    H    I" << endl;
        cout << " \u250C\u2500\u2500\u2500\u2500\u252C\u2500\u2500\u2500\u2500\u252C\u2500\u2500\u2500\u2500\u252C\u2500\u2500\u2500\u2500\u252C\u2500\u2500\u2500\u2500\u252C\u2500\u2500\u2500\u2500\u252C\u2500\u2500\u2500\u2500\u252C\u2500\u2500\u2500\u2500\u2510" << endl;

        cout << "8\u2502 "<< board[0][0] <<"  \u2502 "<< board[0][1] <<"  \u2502 "<< board[0][2] <<"  \u2502 "<< board[0][3] <<"  \u2502 "<< board[0][4] <<"  \u2502 "<< board[0][5] <<"  \u2502 "<< board[0][6] <<"  \u2502 "<< board[0][7] <<"  \u2502" << endl;
        cout << " \u251C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u2524" << endl;

        cout << "7\u2502 "<< board[1][0] <<"  \u2502 "<< board[1][1] <<"  \u2502 "<< board[1][2] <<"  \u2502 "<< board[1][3] <<"  \u2502 "<< board[1][4] <<"  \u2502 "<< board[1][5] <<"  \u2502 "<< board[1][6] <<"  \u2502 "<< board[1][7] <<"  \u2502" << endl;
        cout << " \u251C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u2524" << endl;

        cout << "6\u2502 "<< board[2][0] <<"  \u2502 "<< board[2][1] <<"  \u2502 "<< board[2][2] <<"  \u2502 "<< board[2][3] <<"  \u2502 "<< board[2][4] <<"  \u2502 "<< board[2][5] <<"  \u2502 "<< board[2][6] <<"  \u2502 "<< board[2][7] <<"  \u2502" << endl;
        cout << " \u251C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u2524" << endl;

        cout << "5\u2502 "<< board[3][0] <<"  \u2502 "<< board[3][1] <<"  \u2502 "<< board[3][2] <<"  \u2502 "<< board[3][3] <<"  \u2502 "<< board[3][4] <<"  \u2502 "<< board[3][5] <<"  \u2502 "<< board[3][6] <<"  \u2502 "<< board[3][7] <<"  \u2502" << endl;
        cout << " \u251C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u2524" << endl;

        cout << "4\u2502 "<< board[4][0] <<"  \u2502 "<< board[4][1] <<"  \u2502 "<< board[4][2] <<"  \u2502 "<< board[4][3] <<"  \u2502 "<< board[4][4] <<"  \u2502 "<< board[4][5] <<"  \u2502 "<< board[4][6] <<"  \u2502 "<< board[4][7] <<"  \u2502" << endl;
        cout << " \u251C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u2524" << endl;

        cout << "3\u2502 "<< board[5][0] <<"  \u2502 "<< board[5][1] <<"  \u2502 "<< board[5][2] <<"  \u2502 "<< board[5][3] <<"  \u2502 "<< board[5][4] <<"  \u2502 "<< board[5][5] <<"  \u2502 "<< board[5][6] <<"  \u2502 "<< board[5][7] <<"  \u2502" << endl;
        cout << " \u251C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u2524" << endl;

        cout << "2\u2502 "<<board[6][0] <<"  \u2502 "<<board[6][1] <<"  \u2502 "<<board[6][2] <<"  \u2502 "<<board[6][3] <<"  \u2502 "<<board[6][4] <<"  \u2502 "<<board[6][5] <<"  \u2502 "<<board[6][6] <<"  \u2502 "<<board[6][7] <<"  \u2502" << endl;
        cout << " \u251C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u2524" << endl;
        
        cout << "1\u2502 "<< board[7][0] <<"  \u2502 "<< board[7][1] <<"  \u2502 "<< board[7][2] <<"  \u2502 "<< board[7][3] <<"  \u2502 "<< board[7][4] <<"  \u2502 "<< board[7][5] <<"  \u2502 "<< board[7][6] <<"  \u2502 "<< board[7][7] <<"  \u2502" << endl;

        cout << " \u2514\u2500\u2500\u2500\u2500\u2534\u2500\u2500\u2500\u2500\u2534\u2500\u2500\u2500\u2500\u2534\u2500\u2500\u2500\u2500\u2534\u2500\u2500\u2500\u2500\u2534\u2500\u2500\u2500\u2500\u2534\u2500\u2500\u2500\u2500\u2534\u2500\u2500\u2500\u2500\u2518" << endl;
}

void clear_screen(){
    cout << string(50, '\n');
}