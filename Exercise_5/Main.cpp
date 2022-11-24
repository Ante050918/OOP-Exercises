#include "HeaderVjezba5.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	srand(time(NULL));
	/*point p;
	double x, y, z;
	cin >> x;
	cin >> y;
	cin >> z;
	p.set_values(x, y, z);

	int from, to;
	cout << "From: ";
	cin >> from;
	cout << endl;
	cout << "To: ";
	cin >> to;
	point p1;
	p1.pseudo(from, to);

	double a, b, c;
	p.get_values(a, b, c);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	point p3;
	double k = p3.distance_2D(8.1, 12.1, 3.5, 7.6);
	cout << k << endl;

	point p4;
	double h = p4.distance_3D(8.1, 12.1, 3.5, 7.6, 14.2, 10.6);
	cout << h << endl;*/
	gun g;
	int x, y, z, num_of_bullets, a, b, c, d;
	cout << "Enter the coordinate x: ";
	cin >> x;
	cout << " " << endl;
	cout << "Enter the coordinate y: ";
	cin >> y;
	cout << " " << endl;
	cout << "Enter the coordinate z: ";
	cin >> z;
	cout << " " << endl;
	cout << "Enter the number of the bullets: ";
	cin >> num_of_bullets;
	cout << " " << endl;
	g.set_var(x, y, z, num_of_bullets);
	g.print_var(a, b, c, d);



	int o, p, r, s, u, v;
	int n, i, j;
	cout << "Enter the number of targets: ";
	cin >> n;
	target* t = new target[n];
	t->n = n;
	int cnt1 = 0, cnt2 = 0;
	
	for (i = d - 1, j = 0; j < t->n; i--, j++)
	{
		t[j].set_coor_rand();
		if(t[j].hitted_missed(a, b, c) == true)
			cnt1++;
		if (t[j].hitted_missed(a, b, c) == false)
			cnt2++;

		if (i == 0 && j < n)
			i = d;
	}

	for (j = 0; j < t->n; j++)
	{
		t[j].print_var2(o, p, r, s, u, v);
	}
	cout << "The number of hitted target is: " << cnt1 << endl;
	cout << "The number of missed target is: " << cnt2 << endl;

	delete[] t;
}
