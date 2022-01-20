#pragma once
                                                /////TIC TAC TOE USING MVC//////
#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP
using namespace std;
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <string.h>
class Model {
public:
	int pos;
	char marker;
};

class Controller {
public:
	void player_input(char& player1, char& player2);
	void place_marker(char(&board)[10], int pos, char mark);
	bool win_check(char(&board)[10], char mark);
	string choose_first();
	bool space_check(char(&board)[10], int pos);
	bool full_board_check(char(&board)[10]);
	int player_choice(char(&board)[10]);
	bool replay();
};

class View {
public:
	void display_board(char(&board)[10]);
};
#endif // !TIC-TAC-TOE_HPP