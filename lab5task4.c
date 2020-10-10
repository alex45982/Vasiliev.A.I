#include <stdio.h>
#include <math.h>

int main()
{
	int x1, x2, y1, y2, s1, s2;
	float S, P, gip;

	printf("enter point 1 coordinates: ");
	scanf_s("%i %i", &x1, &y1);

	printf("enter point 2 coordinates: ");
	scanf_s("%i %i", &x2, &y2);

	s1 = abs(x2 - x1);
	s2 = abs(y2 - y1);
	gip = sqrt(pow(s1,2) + pow(s2,2));

	S = s1 * s2 / 2;

	P = s1 + s2 + gip;

	printf("S=%f, P=%f", S, P);

	return 0;
}