#include "HeaderVjezba3.h"
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;
/*4. Napisati funkciju u za uklanjanje elementa iz vektora sa što manje operacija. Poredak elemenata u vektoru nije bitan.*/

void delete_element(vector <int>& vect)
{
	vector <int>::iterator it;

	int n = vect.size();

	int p = vect[n - 1];

	it = vect.begin() + 2;
	vect.erase(it);

	it = vect.begin() + 2;
	vect.insert(it, p);

	vect.pop_back();

	for (int i = 0; i < vect.size(); i++)
		cout << vect.at(i) << " ";
}
