/*1. Napisati funkcije za unos i ispis vektora brojeva. Prototipove funkcija staviti u
.hpp datoteke, a implementaciju u.cpp datoteke.
Za unos vektora napisati dvije funkcije :
• funkcija čiji su parametri referenca na vektor i broj elemenata vektora,
• funkcija čiji su parametri referenca na vektor i granice intervala u kojem
trebaju biti elementi vektora.Elementi vektora se unose u funkciji, sve dok
se ne unese broj koji nije u danom intervalu.*/

#include "HeaderVjezba3.h"
#include <iostream>
#include <iomanip>
using namespace std;

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

void print_vector(vector <int>& vect, vector <int>& vect1, int& n, int& p)
{
	int i, j;
	cout << "Vector1 :";
	for (i = 0; i < n; i++)
		cout << vect.at(i) << " ";
	cout << endl;
	cout << "Vector2 :";
	for (j = 0; j < p; j++)
		cout << vect1.at(j) << " ";
	
}
