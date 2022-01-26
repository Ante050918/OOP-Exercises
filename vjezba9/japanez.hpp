#pragma once
#ifndef JAPANEZ_HPP
#define JAPANEZ_HPP
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;




class game {
public:
	bool game_loop(int ppoints, int cpoints);
	bool check_guess(int s, int g);
	void increase_points(int& p);
	void display_score(int ppoints, int cpoints);
};

class player {
public:
	int p = 0;
	int sumh = 0;
};

class humanplayer : public player {
public:
	void human_input();
	int human_guess();
};

class computerplayer : public player {
public:
	void computer_input();
	int computer_guess();
	bool check_previous(int g, vector <int>& v);
};

#endif JAPANEZ_HPP
