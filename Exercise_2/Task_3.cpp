#include "HeaderVjezba2.h"
#include <iostream>
#include <iomanip>
using namespace std;

void intersect(rectangle* rect, circle* cir, int n, int& cnt)
{
	int i, xn, yn, dx, dy;
	cnt = 0;
	for (i = 0; i < n; i++)
	{
		xn = max(rect -> x1, min(cir -> xc, rect -> x2));
		yn = max(rect->y1, min(cir -> yc, rect -> y2));

		dx = xn - cir -> xc;
		dy = yn - cir -> yc;

		if ((dx * dx + dy * dy) <= cir->r * cir->r)
			cnt++;
	}
}
