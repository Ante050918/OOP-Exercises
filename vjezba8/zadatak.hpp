#pragma once
#ifndef ZADATAK_HPP
#define ZADATAK_HPP
#include <iostream>
using namespace std;
class timer {
	int hour, minute;
	double second;
public:
	timer() {
		hour = 0;
		minute= 0;
		second = 0;
	}
	timer(int hou, int min, double sec);
	int getHours();
	int getMinutes();
	void setMinutes(int min);
	double getSeconds();
	void setSeconds(double sec);
	timer operator+=(const timer& nT);
	timer operator/=(const size_t& v);
	timer operator/(const size_t& v);
	operator double();
	timer operator-(const timer& m);
	bool operator<(const timer& nT);
	friend std::ostream& operator<<(std::ostream& os, const timer& t);
};
class penalty {

	double seconds;
public:
	penalty() {
		seconds = 0;
	}
	penalty(double s) {
		seconds = s;
	}
	penalty operator()(timer& t);
};
#endif // !ZADATAK_HPP

