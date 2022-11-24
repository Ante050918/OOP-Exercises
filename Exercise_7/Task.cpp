#include "zadatak.hpp"

double Point::getX()
{
	return x;
}

double Point::getY()
{
	return y;
}

/*· Napišite member funkciju draw_char koja za točku p i znak ch postavlja znak ch na odgovarajućem mjestu u matrici (x-koordinata odgovara
retku matrice, a y-koordinata stupcu). Ako koordinate točke p nisu
cjelobrojne, zaokružite ih na najbližu cjelobrojnu vrijednost.
*/
void Board::draw_char(Point p1, char ch)
{
	int x1 = round(p1.getX());
	int y1 = round(p1.getY());
	board[y1][x1] = ch;
}

/*· Napišite member funkciju draw_up_line koja počevši od točke p postavlja znak ch na svim poljima koja predstavljaju okomitu liniju prema
gore.
*/
void Board::draw_up_line(Point p1, char ch)
{
	int x1 = round(p1.getX());
	int y1 = round(p1.getY());
	for (int i = 0; i <= y1; ++i)
		board[i][x1] = ch;
}

/*Napišite member funkciju draw_line koja za dvije točke p1 i p2 postavlja
znak ch na svim poljima koje predstavljaju liniju između te dvije točke.*/
void Board::draw_line(Point p1, Point p2, char ch)
{
	int x1 = round(p1.getX());
	int y1 = round(p1.getY());
	int x2 = round(p2.getX());
	int y2 = round(p2.getY());

	if (x1 > x2)
	{
		swap(x1, x2);
		swap(y1, y2);
	}
	if (x1 == x2 && y1 == y2)
	{
		board[x1][y1] = ch;
	}
	while (x1 != x2 || y1 != y2)
	{
		int m = abs(y2 - abs(y2 - y1));
		int n = abs(x2 - abs(x2 - x1));

		board[m][n] = ch;

		if (x1 != x2 && y1 != y2)
			x1++, y1++;
		else if (x1 == x2 && y1 != y2)
			y1++;
		else if (x1 != x2 && y1 == y2)
			x1++;
	}
}
/*· Napišite member funkciju koja iscrtava trenutno stanje Boarda.*/
void Board::display()
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
}
