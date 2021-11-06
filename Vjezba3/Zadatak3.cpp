#include "HeaderVjezba3.h"
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;
/*3. Koristeći STL funkcije sortirajte vektor, ubacite 0 ispred najmanjeg elementa, te
sumu svih elemenata iza najvećeg elementa.*/

void sort_vector(vector <int>& vect)
{
	vector <int> ::iterator it;

	sort(vect.begin(), vect.end());
	cout << "Sorted vector: " << endl;

	for (auto p : vect)
		cout << p << " ";

	cout << endl;
	
	int add = 0;
	for (int i = 0; i < vect.size(); i++)
		add += vect.at(i);

	it = vect.begin();
	vect.insert(it, 0);

	it = vect.end();
	vect.insert(it, 1, add);
	cout << "Sorted vector after inserting 2 new elements: " << endl;
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect.at(i) << " ";
	}
	
	


}