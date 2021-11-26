#pragma once
#ifndef HANGMAN_HPP
#define HANGMAN_HPP
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <time.h>
#include <string>
using namespace std;


class HangmanModel {
public:
	string movie;
	string GuessMovie;
	string usedLetters;
	int lifes = 8;
	bool inGame;
	void getMoviefromFile();
	void setGuessMovie();
};

class HangmanController {
public:
	void userEntry(char& c);
	void checkLetter(HangmanModel& m, char c);
	void updateLives(HangmanModel m)const;
	bool chechIfGameIsOver(HangmanModel m);
};

class HangmanView {
public:
	void displayCurrentProgress(HangmanModel m);
	void displayUsedLetters(HangmanModel m);
	void displayHangman(HangmanModel m);
};

#endif // !HANGMAN_HPP

