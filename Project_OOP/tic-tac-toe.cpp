#include "tic-tac-toe.hpp"

void Controller::player_input(char& player1, char& player2) {
    char marker = ' ';
    while (marker != 'X' && marker != 'O')
    {
        cout << "Player1: Choose the marker X or O :";
        cin >> marker;
        cout << endl;
    }

    if (marker == 'X')
    {
        player1 = 'X';
        player2 = 'O';
    }
    else
    {
        player1 = 'O';
        player2 = 'X';
    }
}

void Controller::place_marker(char (&board)[10], int pos, char mark) {
    board[pos] = mark;
}

bool Controller::win_check(char (&board)[10], char mark) {
    return ((board[7] == mark && board[8] == mark && board[9] == mark) || // across the top
        (board[4] == mark && board[5] == mark && board[6] == mark) || // across the middle
        (board[1] == mark && board[2] == mark && board[3] == mark) || // across the bottom
        (board[7] == mark && board[4] == mark && board[1] == mark) || // down the middle
        (board[8] == mark && board[5] == mark && board[2] == mark) || // down the middle
        (board[9] == mark && board[6] == mark && board[3] == mark) || // down the right side
        (board[7] == mark && board[5] == mark && board[3] == mark) || // diagonal
        (board[9] == mark && board[5] == mark && board[1] == mark)); // diagonal
}

string Controller::choose_first() {
    int first = rand() % 1;
    if (first == 0)
        return "Player1";
    else
        return "Player2";
}
bool Controller::space_check(char (&board)[10], int pos) {
    if (board[pos] == ' ')
        return true;
    return false;
}


bool Controller::full_board_check(char (&board)[10]) {
    Controller c;
    for (int i = 1; i < 10; i++)
    {
        if (c.space_check(board, i))
            return false;
    }
    return true;
}

int Controller::player_choice(char (&board)[10]) {
    int pos = 0;
    Controller c;
    while ((pos != 1 && pos != 2 && pos != 3 && pos != 4 && pos != 5 && pos != 6 && pos != 7 && pos != 8 && pos != 9) || (!c.space_check(board, pos)))
    {
        cout << "Enter your position: ";
        cin >> pos;
        cout << endl;
    }
    return pos;
}

bool Controller::replay() {
    string choice;
    cout << "Hey, do you want play again? Yes or No: ";
    cin >> choice;
    cout << endl;
    tolower(choice[0]);
    if (choice[0] == 'y')
        return true;
    else
        return false;
}

void View::display_board(char (&board)[10]) {
    system("CLS");
    cout << " " << board[7] << " | " << board[8] << " | " << board[9] << endl;;
    cout << "---|---|---" << endl;
    cout << " " << board[4] << " | " << board[5] << " | " << board[6] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[1] << " | " << board[2] << " | " << board[3] << endl;
}
