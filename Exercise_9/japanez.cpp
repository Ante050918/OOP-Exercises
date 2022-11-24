#include "japanez.hpp"

bool game::game_loop(int ppoints, int cpoints) {
	if (ppoints >= 3 || cpoints >= 3) {
		return 0;
	}
	return 1;
}

void humanplayer::human_input() {
	int in = 1;
	int it = 0;
	sumh = 0;
	cout << "Choose 3 or less coins among 1, 2, and 5-----First hand" <<endl;
	while (in != 0 && it < 3) {
		cin >> in;
		if (in == 1 || in == 2 || in == 5) {
			sumh += in;
			it++;
		}
		else {
			cout << "Try again" << endl;
		}
	}
	in = 1, it = 0;
	cout << "Choose 3 or less coins among 1, 2, and 5-----Second hand" << endl;
	while (in != 0 && it < 3) {
		cin >> in;
		if (in == 1 || in == 2 || in == 5) {
			sumh += in;
			it++;
		}
		else {
			cout << "Try again" << endl;
		}
	}
}

void computerplayer::computer_input() {
	srand(time(NULL));
	int randd;
	do {
		randd = rand() % 31;
	} while (randd == 28 || randd == 29);
	sumh = randd;
}

int computerplayer::computer_guess() {
	srand(time(NULL));
	vector <int> v;
	int g;
	do {
		g = rand() % 31;
	} while (g == 28 || g == 29 || check_previous(g, v));
	cout << "Computer guess :" << g << endl;;
	return g;
}

bool computerplayer::check_previous(int g, vector <int>& v) {
	int sz = v.size();
	for (int i = 0; i < sz; i++) {
		if (g == v[i]) {
			return 0;
		}
	}
	v.push_back(g);
	return 1;
}

int humanplayer::human_guess() {
	int g;
	cout << "Human guess: ";
	do {
		cin >> g;
	} while (g == 29 || g > 30 || g < 0 || g == 28);
	return g;
}

bool game::check_guess(int s, int g) {
	return s == g;
}

void game::increase_points(int& p) {
	p++;
}

void game::display_score(int ppoints, int cpoints) {
	cout << endl << "Pl: " << ppoints << "   " << "Comp: " << cpoints << endl << endl;
}
