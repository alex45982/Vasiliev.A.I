#include <stdio.h>
#include <math.h>

float rings(float r1, float r2)
{
	float x = 3.14 * (r1 * r1 - r2 * r2);
	
	return x;
}

int main()
{
	float a, b, c;
	int i;

	for (i = 1; i < 4; i++)
	{
		printf("enter radiuses: ");
		scanf_s("%f %f", &a, &b);

		c = rings(a, b);

		printf("ring area = %f\n", c);
	}
	return 0;
}