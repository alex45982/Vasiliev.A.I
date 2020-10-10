#include <stdio.h>
#include <math.h>

int main()
{	
	int x1, x2, y1, y2,xs,ys;
	float dis;

	printf("enter point 1 coordinates (x1,y1):");
	scanf_s("%i %i", &x1, &y1);
	
	printf("enter point 2 coordinates (x2,y2):");
	scanf_s("%i %i", &x2, &y2);

	xs = x2 - x1;
	ys = y2 - y1;
	dis = sqrt(pow(xs,2) + pow(ys,2));

	printf("distance between 1 & 2 = %f", dis);

	return 0;
}