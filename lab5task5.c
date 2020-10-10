#include <stdio.h>
#include <math.h>

int main()
{
	int x1, x2, x3, y1, y2, y3;
	float P, p, S, s1,s2,s3,sx1, sx2, sx3, sy1, sy2, sy3;

	printf("enter point 1 coordinates: ");
	scanf_s("%i %i", &x1, &y1);

	printf("enter point 2 coordinates: ");
	scanf_s("%i %i", &x2, &y2);

	printf("enter point 3 coordinates: ");
	scanf_s("%i %i", &x3, &y3);

	sx1 = abs(x2 - x1);
	sx2 = abs(x3 - x2);
	sx3 = abs(x1 - x3);
	sy1 = abs(y2 - y1);
	sy2 = abs(y3 - y2);
	sy3 = abs(y1 - y3);

	s1 = sqrt(pow(sx1, 2) + pow(sy1, 2));
	s2 = sqrt(pow(sx2, 2) + pow(sy2, 2));
	s3 = sqrt(pow(sx3, 2) + pow(sy3, 2));

	P = s1 + s2 + s3;
	p = P / 2;
	S = sqrt(p * (p - s1) * (p - s2) * (p - s3));

	printf("P=%f, S=%f", P, S);

	return 0;
}