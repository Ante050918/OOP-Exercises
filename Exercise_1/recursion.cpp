#include "HeaderVjezba1.h"
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int rekurzija(int br[], int n, int *big, int *sml)
{
	if (n < 0)
	{
		return 0;
	}
	else
	{
		if (*big < br[n])
			*big = br[n];

		if (*sml > br[n])
			*sml = br[n];
		return rekurzija(br, --n, big, sml);
	}
}
