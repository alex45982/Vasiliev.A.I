#include <stdio.h>
#include <math.h>


int main()
{
	int a, b, c, ax, ay, bx, by, cx, cy;
	float ab, ac;

	printf("enter A coordinates: ");
	scanf_s("%i %i", &ax, &ay);

	printf("enter B coordinates: ");
	scanf_s("%i %i", &bx, &by);

	printf("enter C coordinates: ");
	scanf_s("%i %i", &cx, &cy);

	ab = sqrt((ax - bx)* (ax - bx) + (ay - by)* (ay - by));
	ac = sqrt((ax - cx)*(ax - cx) + (ay - cy)* (ay - cy));

	if (ab < ac)
	{
		printf("point B is closer, distance = %f", ab);
	}
	else
	{
		printf("point C is closer, distance = %f", ac);
	}

	return 0;

}