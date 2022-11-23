#include "HeaderVjezba2.h"
#include <iostream>
#include <iomanip>
#include <cstddef>
using namespace std;

int main()
{
	/*// 1.zadatak

	int arr[] = { 5, 8, 1, 99, 23 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int min, max;
	naj_najm(arr ,n, min, max);

	cout << "Najveci broj u nizu je: " << max << endl << "Najmanji broj u nizu je: " << min << endl;*/

	/* // 2.zadatak
	int arr[] = {5, 8, 1, 99, 23};
	int n = sizeof(arr) / sizeof(arr[0]);
	int e;

	int p = element(arr, n, e);
	cout << "Function from array returns number: " << p << endl;
	p += 1;
	cout << "After increment by 1, number is: " << p << endl;*/

	/*// 3.zadatak
	rectangle rect[1000];
	circle cir;
	int n, i;
	cout << "Enter the number of rectangles: " << endl;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "Enter the coordinate x1: " << endl;
		cin >> rect[i].x1;
		cout << endl;
		cout << "Eneter the coordinate y1: " << endl;
		cin >> rect[i].y1;
		cout << endl;
		cout << "Enter the coordinate x2: " << endl;
		cin >> rect[i].x2;
		cout << endl;
		cout << "Enter the coordinate y2: " << endl;
		cin >> rect[i].y2;
		cout << endl;
	}

	cout << "Enter the coordinate xc for circle: " << endl;
	cin >> cir.xc;
	cout << endl;
	cout << "Enter the coordinate yc for circle: " << endl;
	cin >> cir.yc;
	cout << endl;
	cout << "Enter the radius for circle: " << endl;
	cin >> cir.r;
	cout << endl;

	int cnt;
	intersect(rect, &cir, n, cnt);
	cout << "The number of rectangles intersecting with the circle is: " << cnt << endl;*/

	myVector mv;
	mv.vector_new(3);

	int m;
	cout << "Unesi element, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa" << endl;
	while (cin >> m)
		mv.vector_push_back(m);

	cout << "first element " << mv.vector_front() << endl;
	cout << "last element " << mv.vector_back() << endl;
	mv.print_vector();

	cout << "removing last element" << endl;
	mv.vector_pop_back();
	mv.print_vector();

	cout << "size " << mv.vector_size() << endl;
	cout << "capacity " << mv.capacity << endl;

	mv.vector_delete();
}
