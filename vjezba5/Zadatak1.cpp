/*1. Napisati klasu za poziciju točke u prostoru koja ima tri double podatka: dužinu,
širinu i visinu (x, y, z koordinate). Klasa ima sljedeće funkcije:*/

#include "HeaderVjezba5.h"
#include <iostream>
#include <iomanip>
#include <cmath>

/*◦ Funkciju za postavljanje vrijednosti članova (treba imati pretpostavljene vrijednosti 0).*/

void point::set_values(double a, double b, double c) {
	x = a;
	y = b;
	z = c;
}


/*◦ Funkciju za postavljanje pseudorandom vrijednosti članova (granice intervala su parametri funkcije).*/

void point::pseudo(int from, int to) {
	x = rand() % (to + 1 - from) + from;
	cout << x << endl;
	y = rand() % (to + 1 - from) + from;
	cout << y << endl;
	z = rand() % (to + 1 - from) + from;
	cout << z << endl;
}

/*◦ Funkciju za dohvaćanje vrijednosti članova.*/

void point::get_values(double& a, double& b, double& c)const {
	a = this -> x;
	b = this -> y;
	c = this -> z;
}

/*◦ Funkciju koja računa udaljenost do druge točke u 2D ravnini (zanemarujući z koordinatu).*/

double point::distance_2D(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);

}

/*◦ Funkciju koja računa udaljenost do druge točke u 3D prostoru.*/

double point::distance_3D(double x1, double y1, double z1, double x2, double y2, double z2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2) * 1.0);
}