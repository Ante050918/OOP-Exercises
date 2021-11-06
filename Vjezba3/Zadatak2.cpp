#include "HeaderVjezba3.h"
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

/*2. Koristeći funkcije iz prvog zadatka unijeti dva vektora i formirati novi vektor koji
se sastoji od elemenata iz prvog vektora koji nisu u drugom vektoru.
*/

void input_vector1(vector <int>& vect, int& n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		cout << "Enter a vector element: ";
		int num;
		cin >> num;
		vect.push_back(num);
		cout << endl;
	}
}

int input_vector2(vector <int>& vect1, int& a, int& b)
{
	int num;
	int i = 0;
	cout << "Enter a vector element: ";
	cin >> num;
	if (num >= a && num <= b)
		vect1.push_back(num);
	while (num >= a && num <= b)
	{
		cout << "Enter a vector element: ";
		cin >> num;
		vect1.push_back(num);
	}
	return vect1.size() - 1;
}


void vector3(vector <int>& vect2, vector <int>& vect1, vector <int>& vect, int &n, int&p)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < p; j++)
		{
			if (vect.at(i) == vect1.at(j))
				break;
		}

		if (j == p)
			vect2.push_back(vect.at(i));
	}
	cout << endl;
	int k;
	for (k = 0; k < vect2.size(); k++)
		cout << vect2.at(k) << " ";
}