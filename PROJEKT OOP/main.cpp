#include "tic-tac-toe.hpp"


int main() {
	View v;
	Model m;
	Controller c;
	bool game_on = false;
	cout << "WELCOME TO TIC TAC TOE GAME!" << endl;
	while (true)
	{
		char board[10] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
		char player1_marker, player2_marker;
		c.player_input(player1_marker, player2_marker);
		string turn = c.choose_first();
		cout << turn << " will go first." << endl << endl;
		string play_game;
		cout << "Are you ready to play? Enter Yes or No:";
		cin >> play_game;
		cout << endl;
		tolower(play_game[0]);
		if (play_game[0] == 'y')
			game_on = true;
		else
			game_on = false;

		while (game_on)
		{
			if (turn == "Player1")
			{
				v.display_board(board);
				int pos = c.player_choice(board);
				c.place_marker(board, pos, player1_marker);

				if (c.win_check(board, player1_marker))
				{
					v.display_board(board);
					cout << "Congratulations! You have won the game!" << endl;
					game_on = false;
				}
				else
				{
					if (c.full_board_check(board))
					{
						v.display_board(board);
						cout << "The game is draw!" << endl;
						break;
					}
					else
						turn = "Player2";
				}
			}
			else
			{
				v.display_board(board);
				int pos = c.player_choice(board);
				c.place_marker(board, pos, player2_marker);

				if (c.win_check(board, player2_marker))
				{
					v.display_board(board);
					cout << "Congratulations! You have won the game!" << endl;
					game_on = false;
				}
				else
				{
					if (c.full_board_check(board))
					{
						v.display_board(board);
						cout << "The game is draw!" << endl;
						break;
					}
					else
						turn = "Player1";
				}
				
			}
		}
		if ((c.replay() == false))
			break;
	}
}