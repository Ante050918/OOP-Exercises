#include "animals.hpp"

string Ptica::vrsta_zivotinje() {
	return this->vrsta;
}

int Ptica::br_nogu() {
	return this->noge;
}

void Ptica::set_noge(int n) {
	this->noge = n;
}

void Ptica::set_vrsta(string s) {
	this->vrsta = s;
}
//--------------------------------------------------------------

string Pauk::vrsta_zivotinje() {
	return this->vrsta;
}

int Pauk::br_nogu() {
	return this->noge;
}

void Pauk::set_noge(int n) {
	this->noge = n;
}

void Pauk::set_vrsta(string s) {
	this->vrsta = s;
}
//-------------------------------------------------------------
string Kukac::vrsta_zivotinje() {
	return this->vrsta;
}

int Kukac::br_nogu() {
	return this->noge;
}

void Kukac::set_noge(int n) {
	this->noge = n;
}

void Kukac::set_vrsta(string s) {
	this->vrsta = s;
}

//-------------------------------------------------------------

Zohar::Zohar() {
	set_vrsta("Zohar");
	set_noge(14);
}

Orao::Orao() {
	set_vrsta("Orao");
	set_noge(2);
}

Gladijator::Gladijator() {
	set_vrsta("Gladijator");
	set_noge(8);
}
