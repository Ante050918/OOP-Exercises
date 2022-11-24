#include "animals.hpp"

int main() {

	Orao orao;
	Gladijator gladijator;
	Zohar zohar;

	Zivotinja* zivotinje[3];
	int len = sizeof(zivotinje) / sizeof(Zivotinja);

	zivotinje[0] = new Orao;
	zivotinje[1] = new Gladijator;
	zivotinje[2] = new Zohar;


	Brojac brojac;


	for (int i = 0; i < len; i++) {
		brojac.print_zivotinja(zivotinje[i]);
	}

	brojac.print_noge();
}
