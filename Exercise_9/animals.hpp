#pragma once
#ifndef ANIMALS_HPP
#define ANIMALS_HPP
#include <iostream>
#include <vector>

using namespace std;

class Zivotinja {
public:
	virtual int br_nogu() = 0;
	virtual string vrsta_zivotinje() = 0;
};



class Pauk : public Zivotinja {
	string vrsta;
	int noge;

public:
	string vrsta_zivotinje();
	int br_nogu();
	void set_noge(int n);
	void set_vrsta(string s);
};

class Gladijator : public Pauk {
public:
	Gladijator();
};

class CrnaUdovica : public Pauk {
public:
	CrnaUdovica();
};



class Ptica : public Zivotinja {
	string vrsta;
	int noge;

public:
	string vrsta_zivotinje();
	int br_nogu();
	void set_noge(int n);
	void set_vrsta(string s);
};

class Orao : public Ptica {
public:
	Orao();
};

class Vrabac : public Ptica {
public:
	Vrabac();
};



class Kukac : public Zivotinja {
	string vrsta;
	int noge;

public:
	string vrsta_zivotinje();
	int br_nogu();
	void set_noge(int n);
	void set_vrsta(string s);
};

class Skakavac : public Ptica {
public:
	Skakavac();
};

class Zohar : public Ptica {
public:
	Zohar();
};

class Brojac {
private:
	int legs = 0;
public:
	void print_zivotinja(Zivotinja* zivotinja) {
		cout << "Added: " << zivotinja->vrsta_zivotinje() << endl;
		this->legs += zivotinja->br_nogu();
	};

	void print_noge() {
		cout << this->legs << endl;
	}
};

#endif ANIMALS_HPP
