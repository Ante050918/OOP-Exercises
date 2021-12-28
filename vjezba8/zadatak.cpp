#include "zadatak.hpp"


timer::timer(int hou, int min, double sec) {
	hour = hou;
	minute = min;
	second = sec;
}
int timer::getHours() {
	return hour;
}
int timer::getMinutes() {
	return minute;
}
void timer::setMinutes(int min) {
	if (min > 0) {
		minute = min;
	}
}
double timer::getSeconds() {
	return second;
}
void timer::setSeconds(double sec) {
	if (sec > 0) {
		second = sec;
	}
}
timer timer::operator+=(const timer& nT) {
	second += nT.second;
	minute += nT.minute;
	hour += nT.hour;
	if (second > 59) {
		second -= 60;
		minute++;
	}
	if (minute > 59) {
		minute -= 60;
		hour++;
	}
	return timer(hour, minute, second);
}
/*timer timer::operator+(const timer& nT) {
	second = second + nT.second;
	minute = minute + nT.minute;
	hour = hour + nT.hour;
	if (second > 59) {
		second -= 60;
		minute++;
	}
	if (minute > 59) {
		minute -= 60;
		hour++;
	}
	return timer(hour, minute, second);
}*/
timer timer::operator/=(const size_t& v) {
	double time = 3600 * hour + 60 * minute + second;
	time /= v;

	hour = time / 3600;
	minute = (time - (hour * 3600)) / 60;
	second = (time - ((hour * 3600) + (minute * 60)));
	return timer(hour, minute, second);
}
timer timer::operator/(const size_t& v) {
	double time = 3600 * hour + 60 * minute + second;
	time /= v;

	hour = time / 3600;
	minute = (time - (hour * 3600)) / 60;
	second = (time - ((hour * 3600) + (minute * 60)));
	return timer(hour, minute, second);
}
timer::operator double() {
	return (hour + minute + second);
}
timer timer::operator-(const timer& m) {
	int hours = hour - m.hour;
	int minutes = minute - m.minute;
	double seconds = 0;
	if (minutes) {
		seconds = (second + minutes * 60) - m.second;
	}
	else {
		seconds = second - m.second;
	}
	return timer(hours, minutes, seconds);
}
bool timer::operator<(const timer& nT) {
	return(hour < nT.hour && minute < nT.minute && second < nT.second);
}

penalty penalty::operator()(timer& t) {
	int hours = t.getHours();
	int minutes = t.getMinutes();
	double seconds = t.getSeconds() + this->seconds;
	t.setMinutes(minutes);
	if (seconds > 59) {
		seconds -= 60;
		minutes++;
	}
	t.setMinutes(minutes);
	t.setSeconds(seconds);
	return *this;
}

ostream& operator<<(ostream& os, const timer& t)
{
	os << t.hour << ':' << t.minute << ':' << t.second << endl;
	return os;
}