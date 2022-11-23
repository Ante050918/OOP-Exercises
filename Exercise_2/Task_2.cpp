#include "HeaderVjezba2.h"
#include <iostream>
#include <iomanip>
using namespace std;

int element(int arr[], int n, int& e)
{
	srand(time(NULL));

	e = rand() % n;

	return arr[e];
	
}
