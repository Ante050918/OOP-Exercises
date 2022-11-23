#include "HeaderVjezba2.h"
#include <iostream>
#include <iomanip>
using namespace std;

void naj_najm(int arr[], int n, int& min, int& max)
{
	int i;
	min = arr[0];
	max = arr[0];

	for (i = 1; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}

}
