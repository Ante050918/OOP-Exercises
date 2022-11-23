#include "HeaderVjezba1.h"
#include <iostream>
#include <iomanip>

using namespace std;


int iteracija(int arr[], int n, int* big, int* sml)
{
	int i;
	for (i = 1; i < n; ++i)
	{
		if(*big < arr[i])
			*big = arr[i];

		if (*sml > arr[i])
			*sml = arr[i];
	}

	return 0;
}
