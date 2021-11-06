#include "HeaderVjezba3.h"
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
/*6. Napišite funkciju koja stringove, koje korisnik unosi, sprema u vektor stingova,
svaki string preokrene te sortira vektor po preokrenutim stringovima.*/

void reverse_and_sort()
{
	vector <string> vect;
	string str;
	int n = 5;
	int i = 0;
	while (i < n)
	{
		cout << "Enter a string: ";
		getline(cin, str);
		reverse(str.begin(), str.end());
		vect.push_back(str);
		i++;
	}
	cout << endl;
	cout << endl;
	cout << "After adding and reversing each string in vector: " << endl;;
	for (i = 0; i < vect.size(); i++)
	{
		cout << vect.at(i) << " ";
	}
	cout << endl;
	cout << endl;
	cout << "After sorting: " << endl;
	for (i = 0; i < vect.size(); i++)
	{
		sort(vect.begin(), vect.end());
		cout << vect.at(i) << " ";
	}
	
	cout << endl;
	cout << endl;
}