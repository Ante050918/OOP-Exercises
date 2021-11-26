#include "Hangman.hpp"
#include <fstream>
using namespace std;


void HangmanModel::getMoviefromFile() {
	string line;
	string a;
	vector <string> lines;
	ifstream myfile("movie.txt");
	int total_lines = 0;
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			total_lines++;
			lines.push_back(line);
		}
	}

	else
		cout << "Unable to open file";


	int random_number = rand() % total_lines;
	movie = lines[random_number];
}


void HangmanModel::setGuessMovie() {
	int n = movie.size();
	
	for (int i = 0; i < n; i++)
	{
		if (movie[i] == ' ')
			GuessMovie.push_back(' ');
		else
			GuessMovie.push_back('_');
	}
	cout << GuessMovie << endl;
}

void HangmanController::userEntry(char& c) {
	cout << "Enter the letter: ";
	cin >> c;
	cout << endl;
}

void HangmanController::checkLetter(HangmanModel& m, char c) {
	int n = m.movie.size();
	bool flag = true;
	for (int i = 0, j = 0; i < n; j++, i++)
	{
		if (m.movie[i] == toupper(c))
		{
			flag = true;
			break;
		}
		if (m.movie[i] == c)
		{
			flag = true;
			break;
		}
		else
			flag = false;
	}

	for (int i = 0, j = 0; i < n; j++, i++)
	{
		if (m.movie[i] == toupper(c))
			m.GuessMovie.replace(j, 1, 1, toupper(c)); //replaces 1 char from j index with 1 copy of 
		else if(m.movie[i] == c)
			m.GuessMovie.replace(j, 1, 1, c);
	}

	if (flag)
	{
		cout << "Congratulations, you guessed the letter." << endl;
	}
	else
	{
		cout << "You failed, try again" << endl;
		m.lifes--;
	}

	m.usedLetters.push_back(c);
	m.usedLetters.push_back(' ');
}
void HangmanController::updateLives(HangmanModel m)const {
	cout << "The number of reamining lifes: " << m.lifes << endl;
}

bool HangmanController::chechIfGameIsOver(HangmanModel m) {
	if (m.GuessMovie == m.movie)
		return true;

	if (m.lifes == 0)
		return false;
}

void HangmanView::displayCurrentProgress(HangmanModel m) {
	cout << "Our new word/words now look like this: " << m.GuessMovie << endl;
}

void HangmanView::displayUsedLetters(HangmanModel m) {
	cout << "\nTHE LETTERS WE USED: " << m.usedLetters << endl;

}

void HangmanView::displayHangman(HangmanModel m) {
	if (m.lifes == 8)
		return;
	else if (m.lifes == 7)
	{
		cout << "   __________" << endl;
		cout << "   | /     |" << endl;
		cout << "   |/      " << endl;
		cout << "   |" << endl;
		cout << "   |" << endl;
		cout << "   |" << endl;
		cout << "   |" << endl;
		cout << "___|____" << endl;
	}
	else if (m.lifes == 6)
	{
		cout << "   __________" << endl;
		cout << "   | /     |" << endl;
		cout << "   |/      O" << endl;
		cout << "   |       " << endl;
		cout << "   |" << endl;
		cout << "   |" << endl;
		cout << "   |" << endl;
		cout << "___|____" << endl;
	}
	else if (m.lifes == 5)
	{
		cout << "   __________" << endl;
		cout << "   | /     |" << endl;
		cout << "   |/      O" << endl;
		cout << "   |       |" << endl;
		cout << "   |" << endl;
		cout << "   |" << endl;
		cout << "   |" << endl;
		cout << "___|____" << endl;
	}
	else if (m.lifes == 4)
	{
		cout << "   __________" << endl;
		cout << "   | /     |" << endl;
		cout << "   |/      O" << endl;
		cout << "   |       |\\" << endl;
		cout << "   |" << endl;
		cout << "   |" << endl;
		cout << "   |" << endl;
		cout << "___|____" << endl;
	}
	else if (m.lifes == 3)
	{
		cout << "   __________" << endl;
		cout << "   | /     |" << endl;
		cout << "   |/      O" << endl;
		cout << "   |      /|\\" << endl;
		cout << "   |" << endl;
		cout << "   |" << endl;
		cout << "   |" << endl;
		cout << "___|____" << endl;
	}
	else if (m.lifes == 2)
	{
		cout << "   __________" << endl;
		cout << "   | /     |" << endl;
		cout << "   |/      O" << endl;
		cout << "   |      /|\\" << endl;
		cout << "   |       |" << endl;
		cout << "   |" << endl;
		cout << "___|____" << endl;
	}
	else if (m.lifes == 1)
	{
		cout << "   __________" << endl;
		cout << "   | /     |" << endl;
		cout << "   |/      O" << endl;
		cout << "   |      /|\\" << endl;
		cout << "   |       |" << endl;
		cout << "   |        \\" << endl;
		cout << "___|____" << endl;
	}
	else if (m.lifes == 0)
	{
		cout << "   __________" << endl;
		cout << "   | /     |" << endl;
		cout << "   |/      O" << endl;
		cout << "   |      /|\\" << endl;
		cout << "   |       |" << endl;
		cout << "   |      / \\" << endl;
		cout << "___|____" << endl;
	}
}