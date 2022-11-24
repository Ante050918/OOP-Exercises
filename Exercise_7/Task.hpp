#pragma once
#ifndef ZADATAK_HPP
#define ZADATAK_HPP

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

class Point {
private:
	double x, y;
public:
	Point() : x(0), y(0) {}
	Point(double x1, double y1) : x(x1), y(y1) {}
	Point(const Point& other) : x(other.x), y(other.y) {}
	double getX();
	double getY();
};

class Board {
private:
	int h, l;
	char** board;
public:
	Board()
	{
		h = 10;
		l = 20;

		board = new char* [h];
		for (int i = 0; i < h; i++)
			board[i] = new char[l];
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < l; j++)
			{
				if (i == 0 || j == 0 || i == (h - 1) || j == (l - 1))
					board[i][j] = 'o';
				else
					board[i][j] = ' ';
			}
		}
	}
	Board(int m, int n)
	{
		h = n;
		l = m;

		board = new char* [h];
		for (int i = 0; i < h; i++)
			board[i] = new char[l];
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < l; j++)
			{
				if (i == 0 || j == 0 || i == (h - 1) || j == (l - 1))
					board[i][j] = 'o';
				else
					board[i][j] = ' ';
			}
		}
	}
	Board(const Board& o)
	{
		h = o.h;
		l = o.l;
		board = new char* [h];
		for (int i = 0; i < h; i++)
			board[i] = new char[l];
		memcpy(board, o.board, l * sizeof(h));
	}
	Board(Board&& o)
	{
		h = o.h;
		l = o.l;
		board = o.board;
		board = new char* [h];
		for (int i = 0; i < h; i++)
			board[i] = new char[l];
		memcpy(board, o.board, l * sizeof(h));
		o.h = 0;
		o.l = 0;
		o.board = nullptr;
	}
	~Board()
	{
		h = 0;
		l = 0;
		for (int i = 0; i < h; i++)
			delete[] board[i];
		delete[] board;
	}

	void draw_char(Point p1, char ch);
	void draw_up_line(Point p1, char ch);
	void draw_line(Point p1, Point p2, char ch);
	void display();
};

#endif
