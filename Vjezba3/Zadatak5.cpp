#include "HeaderVjezba3.h"
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
/*5. Napisati funkciju koja broji koliko pojavljivanja danog podstringa ima u stringu koristeći funkcije standardne biblioteke.
*/

int cnt_appearences(string& str, string& substr)
{
	int cnt = 0;
	size_t n = str.find(substr, 0);
	cout << endl;
	while (n != string::npos)
	{
		cnt++;
		n = str.find(substr, n + 1);
	}
	return cnt;
}