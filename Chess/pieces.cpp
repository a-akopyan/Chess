#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;

class Piece{
    public:
        string get_symbol(void) const{return symbol;}
        void changeX(int x){
            x_location = x;
        }
        void changeY(int y){
            y_location = y;
        }

    private:

    protected:
        string color;
        int x_location;
        int y_location;
        string symbol;
};

class Empty: public Piece{
    public:
        Empty(int _x_location, int _y_location){
            x_location = _x_location;
            y_location = _y_location;
            symbol = ' ';
        }
};


class King: public Piece{
    public:
        King(string _color, int _x_location, int _y_location){
            x_location = _x_location;
            y_location = _y_location;
            color = _color;
            if(_color == "black"){
                color = "black";
                symbol = "\u265A";
            }else{
                color = "white";
                symbol = "\u2654";
            }
        }

    private:

};

class Queen: public Piece{
    public:
        Queen(string _color, int _x_location, int _y_location){
            x_location = _x_location;
            y_location = _y_location;
            color = _color;
            if(_color == "black"){
                color = "black";
                symbol = "\u265B";
            }else{
                color = "white";
                symbol = "\u2655";
            }
        }
    private:

};

class Pawn: public Piece{
    public:
        Pawn(string _color, int _x_location, int _y_location){
            x_location = _x_location;
            y_location = _y_location;
            color = _color;
            if(_color == "black"){
                color = "black";
                symbol = "\u265F";
            }else{
                color = "white";
                symbol = "\u2659";
            }
        }
};

class Rook: public Piece{
    public:
        Rook(string _color, int _x_location, int _y_location){
            x_location = _x_location;
            y_location = _y_location;
            color = _color;
            if(_color == "black"){
                color = "black";
                symbol = "\u265C";
            }else{
                color = "white";
                symbol = "\u2656";
            }
        }
};


class Knight: public Piece{
    public:
        Knight(string _color, int _x_location, int _y_location){
            x_location = _x_location;
            y_location = _y_location;
            color = _color;
            if(_color == "black"){
                color = "black";
                symbol = "\u265E";
            }else{
                color = "white";
                symbol = "\u2658";
            }
        }
};

class Bishop: public Piece{
    public:
        Bishop(string _color, int _x_location, int _y_location){
            x_location = _x_location;
            y_location = _y_location;
            color = _color;
            if(_color == "black"){
                color = "black";
                symbol = "\u265D";
            }else{
                color = "white";
                symbol = "\u2657";
            }
        }
};







class Board{
    public:
        void print_board();
        Board(){
            board = vector<vector<Piece *>>();
            board_init(board);
        }
    private:
        vector<vector<Piece *>> board;
        void board_init(vector<vector<Piece *>> &_board);

};

void Board::board_init(vector<vector<Piece *>> &_board){

    vector<Piece *> line1;
    line1.push_back(new Rook("black", 0, 0));
    line1.push_back(new Knight("black", 0, 1));
    line1.push_back(new Bishop("black", 0, 2));
    line1.push_back(new Queen("black", 0, 3));
    line1.push_back(new King("black", 0, 4));
    line1.push_back(new Bishop("black", 0, 5));
    line1.push_back(new Knight("black", 0, 6));
    line1.push_back(new Rook("black", 0, 7));
    board.push_back(line1);

    vector<Piece *> line2;
    line2.push_back(new Pawn("black", 1, 0));
    line2.push_back(new Pawn("black", 1, 1));
    line2.push_back(new Pawn("black", 1, 2));
    line2.push_back(new Pawn("black", 1, 3));
    line2.push_back(new Pawn("black", 1, 4));
    line2.push_back(new Pawn("black", 1, 5));
    line2.push_back(new Pawn("black", 1, 6));
    line2.push_back(new Pawn("black", 1, 7));
    board.push_back(line2);

    vector<Piece *> empty;
    empty.push_back(new Empty(2, 0));
    empty.push_back(new Empty(2, 1));
    empty.push_back(new Empty(2, 2));
    empty.push_back(new Empty(2, 3));
    empty.push_back(new Empty(2, 4));
    empty.push_back(new Empty(2, 5));
    empty.push_back(new Empty(2, 6));
    empty.push_back(new Empty(2, 7));
    board.push_back(empty);
    for(int i = 0; i < 3; i++){
        vector<Piece *> temp = vector<Piece *>(empty);
        for(int j = 0; j < 8; j++){
            temp[j]->changeY(i + 3);
        }
        board.push_back(temp);
    }

    vector<Piece *> line7;
    line7.push_back(new Pawn("white", 6, 0));
    line7.push_back(new Pawn("white", 6, 1));
    line7.push_back(new Pawn("white", 6, 2));
    line7.push_back(new Pawn("white", 6, 3));
    line7.push_back(new Pawn("white", 6, 4));
    line7.push_back(new Pawn("white", 6, 5));
    line7.push_back(new Pawn("white", 6, 6));
    line7.push_back(new Pawn("white", 6, 7));
    board.push_back(line7);

    vector<Piece *> line8;
    line8.push_back(new Rook("white", 7, 0));
    line8.push_back(new Knight("white", 7, 1));
    line8.push_back(new Bishop("white", 7, 2));
    line8.push_back(new Queen("white", 7, 3));
    line8.push_back(new King("white", 7, 4));
    line8.push_back(new Bishop("white", 7, 5));
    line8.push_back(new Knight("white", 7, 6));
    line8.push_back(new Rook("white", 7, 7));
    board.push_back(line8);

}


void Board::print_board(){
        cout << "    A    B    C    D    E    F    H    I" << endl;
        cout << " \u250C\u2500\u2500\u2500\u2500\u252C\u2500\u2500\u2500\u2500\u252C\u2500\u2500\u2500\u2500\u252C\u2500\u2500\u2500\u2500\u252C\u2500\u2500\u2500\u2500\u252C\u2500\u2500\u2500\u2500\u252C\u2500\u2500\u2500\u2500\u252C\u2500\u2500\u2500\u2500\u2510" << endl;

        cout << "8\u2502 "<< board[0][0]->get_symbol() <<"  \u2502 "<< board[0][1]->get_symbol() <<"  \u2502 "<< board[0][2]->get_symbol() <<"  \u2502 "<< board[0][3]->get_symbol() <<"  \u2502 "<< board[0][4]->get_symbol() <<"  \u2502 "<< board[0][5]->get_symbol() <<"  \u2502 "<< board[0][6]->get_symbol() <<"  \u2502 "<< board[0][7]->get_symbol() <<"  \u2502" << endl;
        cout << " \u251C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u2524" << endl;

        cout << "7\u2502 "<< board[1][0]->get_symbol() <<"  \u2502 "<< board[1][1]->get_symbol() <<"  \u2502 "<< board[1][2]->get_symbol() <<"  \u2502 "<< board[1][3]->get_symbol() <<"  \u2502 "<< board[1][4]->get_symbol() <<"  \u2502 "<< board[1][5]->get_symbol() <<"  \u2502 "<< board[1][6]->get_symbol() <<"  \u2502 "<< board[1][7]->get_symbol() <<"  \u2502" << endl;
        cout << " \u251C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u2524" << endl;

        cout << "6\u2502 "<< board[2][0]->get_symbol() <<"  \u2502 "<< board[2][1]->get_symbol() <<"  \u2502 "<< board[2][2]->get_symbol() <<"  \u2502 "<< board[2][3]->get_symbol() <<"  \u2502 "<< board[2][4]->get_symbol() <<"  \u2502 "<< board[2][5]->get_symbol() <<"  \u2502 "<< board[2][6]->get_symbol() <<"  \u2502 "<< board[2][7]->get_symbol() <<"  \u2502" << endl;
        cout << " \u251C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u2524" << endl;

        cout << "5\u2502 "<< board[3][0]->get_symbol() <<"  \u2502 "<< board[3][1]->get_symbol() <<"  \u2502 "<< board[3][2]->get_symbol() <<"  \u2502 "<< board[3][3]->get_symbol() <<"  \u2502 "<< board[3][4]->get_symbol() <<"  \u2502 "<< board[3][5]->get_symbol() <<"  \u2502 "<< board[3][6]->get_symbol() <<"  \u2502 "<< board[3][7]->get_symbol() <<"  \u2502" << endl;
        cout << " \u251C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u2524" << endl;

        cout << "4\u2502 "<< board[4][0]->get_symbol() <<"  \u2502 "<< board[4][1]->get_symbol() <<"  \u2502 "<< board[4][2]->get_symbol() <<"  \u2502 "<< board[4][3]->get_symbol() <<"  \u2502 "<< board[4][4]->get_symbol() <<"  \u2502 "<< board[4][5]->get_symbol() <<"  \u2502 "<< board[4][6]->get_symbol() <<"  \u2502 "<< board[4][7]->get_symbol() <<"  \u2502" << endl;
        cout << " \u251C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u2524" << endl;

        cout << "3\u2502 "<< board[5][0]->get_symbol() <<"  \u2502 "<< board[5][1]->get_symbol() <<"  \u2502 "<< board[5][2]->get_symbol() <<"  \u2502 "<< board[5][3]->get_symbol() <<"  \u2502 "<< board[5][4]->get_symbol() <<"  \u2502 "<< board[5][5]->get_symbol() <<"  \u2502 "<< board[5][6]->get_symbol() <<"  \u2502 "<< board[5][7]->get_symbol() <<"  \u2502" << endl;
        cout << " \u251C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u2524" << endl;

        cout << "2\u2502 "<<board[6][0]->get_symbol() <<"  \u2502 "<<board[6][1]->get_symbol() <<"  \u2502 "<<board[6][2]->get_symbol() <<"  \u2502 "<<board[6][3]->get_symbol() <<"  \u2502 "<<board[6][4]->get_symbol() <<"  \u2502 "<<board[6][5]->get_symbol() <<"  \u2502 "<<board[6][6]->get_symbol() <<"  \u2502 "<<board[6][7]->get_symbol() <<"  \u2502" << endl;
        cout << " \u251C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u253C\u2500\u2500\u2500\u2500\u2524" << endl;
        
        cout << "1\u2502 "<< board[7][0]->get_symbol() <<"  \u2502 "<< board[7][1]->get_symbol() <<"  \u2502 "<< board[7][2]->get_symbol() <<"  \u2502 "<< board[7][3]->get_symbol() <<"  \u2502 "<< board[7][4]->get_symbol() <<"  \u2502 "<< board[7][5]->get_symbol() <<"  \u2502 "<< board[7][6]->get_symbol() <<"  \u2502 "<< board[7][7]->get_symbol() <<"  \u2502" << endl;

        cout << " \u2514\u2500\u2500\u2500\u2500\u2534\u2500\u2500\u2500\u2500\u2534\u2500\u2500\u2500\u2500\u2534\u2500\u2500\u2500\u2500\u2534\u2500\u2500\u2500\u2500\u2534\u2500\u2500\u2500\u2500\u2534\u2500\u2500\u2500\u2500\u2534\u2500\u2500\u2500\u2500\u2518" << endl;
}