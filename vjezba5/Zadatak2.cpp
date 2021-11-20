/*2. Napisati klasu koja predstavlja oružje. Oružje ima svoj položaj u prostoru (jedna
točka u prostoru), broj metaka koji stanu u jedno punjenje i trenutni broj metaka u
punjenju. Može pucati (shoot) i ponovo se puniti (reload).
*/

#include "HeaderVjezba5.h"
#include <iostream>
#include <iomanip>


/*int gun::shoot(int num_of_bullets, int curr_num) {
	int from, to, fired_bullets;
	cout << "Enter the number of  bullets: ";
	cin >> num_of_bullets;
	this->num_of_bullets = num_of_bullets;
	fired_bullets = rand() % (num_of_bullets)+1;

	curr_num = num_of_bullets - fired_bullets;
	int a, b;

	this->curr_num = curr_num;

	for (int i = 0; i < num_of_bullets; i++)
	{
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
	}
	return a, b;
}

void gun::reload(int num_of_bullets, int curr_num) {
	if (curr_num == 0)
	{
		curr_num = num_of_bullets;
		this->curr_num = curr_num;
	}
}*/

void gun::set_var(int x, int y, int z, int num_of_bullets) {
	this->x = x;
	this->y = y;
	this->z = z;
	this->num_of_bullets = num_of_bullets;
}

void gun::print_var(int& a, int& b, int& c, int& d)const {
	a = x;
	cout << "The coordinate x is: " << a << endl;
	b = y;
	cout << "The coordinate y is: " << b << endl;
	c = z;
	cout << "The coordinate z is: " << c << endl;
	d = num_of_bullets;
	cout << "The number of the bullets is: " << d << endl;
}

/*int gun::reload() {
	if (this -> curr_num_bull == 0)
		this -> curr_num_bull = this -> num_of_bullets;

	return this -> curr_num_bull;
}*/

void target::set_coor_rand(){
	x1 = rand() % 20 - 10;
	this -> x1 = x1;
	y1 = rand() % 20 - 10;
	this->y1 = y1;
	z1 = rand() % 20 - 10;
	this->z1 = z1;
	x2 = rand() % 20 - 10;
	this->x2 = x2;
	y2 = rand() % 20 - 10;
	this->y2 = y2;
	z2 = rand() % 20 - 10;
	this->z2 = z2;
}

/*void target::bigger_coor() {
	int x3 = max(this->x1, this->x2);
	int y3 = max(this->y1, this->y2);
	int z3 = max(this->z1, this->z2);
}*/

void target::print_var2(int& o, int& p, int& r, int& s, int& u, int& v)const {
	o = x1;
	cout << "The coordinate x1 is: " << o << endl;
	p = y1;
	cout << "The coordinate y1 is: " << p << endl;
	r = z1;
	cout << "The coordinate z1 is: " << r << endl;
	s = x2;
	cout << "The coordinate x2 is: " << s << endl;
	u = y2;
	cout << "The coordinate y2 is: " << u << endl;
	v = z2;
	cout << "The coordinate z2 is: " << v << endl;
	cout << endl;
}

bool target::hitted_missed(int a, int b, int c) {
	if ((this->x1 > this->x2 && a < this->x1 && a > this->x2) && (this->z1 > this->z2 && c < this->z1 && c > this->z2))
		return true;
	else if ((this->x1 < this->x2 && a > this->x1 && a < this->x2) && (this->z1 < this->z2 && c > this->z1 && c < this->z2))
		return true;
	else
		return false;
}