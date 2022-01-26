#include "Header.hpp"
#include <iostream>

using namespace std;

int main() {
	Stack<int> int_stack(3);

	int_stack.push(2);
	int_stack.push(3);
	int_stack.push(5);
	int_stack.print();
	int_stack.pop();
	cout << endl;
	if (int_stack.is_empty()) {
		cout << "Nije prazna";
	}
	else {
		cout << "Prazna";
	}

}