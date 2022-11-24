#pragma once
#ifndef HEADERVJEZBA5_H
#define HEADERVJEZBA5_H

using namespace std;

class point {
	double x;
	double y;
	double z;
public:
	point() {
		x = 0;
		y = 0;
		z = 0;
	};
	void set_values(double a, double b, double c);
	void pseudo(int from, int to);
	void get_values(double& a, double& b, double& c)const;
	double distance_2D(double x1, double y1, double x2, double y2);
	double distance_3D(double x1, double y1, double z1, double x2, double y2, double z2);
	

};

class gun {
	int x;
	int y;
	int z;
	int num_of_bullets;
	//int curr_num_bull;
public:
	void set_var(int x, int y, int z, int num_of_bullets);
	void print_var(int& a, int& b, int& c, int& d)const;
	//int reload();
};

class target {
public:
	int x1, y1, z1;
	int x2, y2, z2;
	int n;
	void set_coor_rand();
	void print_var2(int& o, int& p, int& r, int& s, int& u, int& v)const;
	bool hitted_missed(int a, int b, int c);
};

#endif // !HEADERVJEZBA5_H

