#include "Hangman.hpp"

int main()
{
	srand(time(NULL));
	HangmanModel m;
	HangmanController k;
	HangmanView v;
	char c;
	m.getMoviefromFile();
	m.setGuessMovie();
	for (m.lifes; m.lifes > 0;)
	{
		k.updateLives(m);
		k.userEntry(c);
		k.checkLetter(m, c);
		v.displayCurrentProgress(m);
		v.displayUsedLetters(m);
		v.displayHangman(m);
		if (k.chechIfGameIsOver(m) == true)
		{
			cout << "\n\nCONGRATULATIONS, YOU WIN!" << endl;
			break;
		}
		if (k.chechIfGameIsOver(m) == false)
		{
			cout << "\n\nGAME OVER, YOU LOSE!" << endl;
			cout << "\n\nWANTED WORDS/WORD WAS: " << m.movie << endl;
		}
	}
	
}
