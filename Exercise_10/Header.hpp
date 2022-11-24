#pragma once
#ifndef HEADER_HPP
#define HEADER_HPP
#include<iostream>
template<class TMP>
class Stack {
	TMP* a;
	size_t sz;
	size_t cp;
public:
	Stack(size_t sz);
	~Stack() { delete[] a; }
	void pop();
	bool is_empty();
	void push(const TMP& num);
	void print();
};

template <class TMP>
Stack<TMP>::Stack(size_t sz)
{
	a = new int[sz];
	this->sz = 0;
	cp = sz;
}

template <class TMP>
void Stack<TMP>::pop() {
	sz--;
}

template <class TMP>
bool Stack<TMP>::is_empty() {
	return sz;
}


template <class TMP>
void Stack<TMP>::push(const TMP& num) {
	if (sz == cp)
	{
		cp *= 2;
		int* arr = new int[cp];

		for (int i = 0; i < cp - 1; i++)
		{
			arr[i] = a[i];
		}

		delete[] a;
		a = arr;
	}

	a[sz] = num;
	++sz;
}


template <class TMP>
void Stack<TMP>::print() {
	for (int i = 0; i < sz; i++) {
		std::cout << a[i] << " ";
	}
}

#endif HEADER_H
