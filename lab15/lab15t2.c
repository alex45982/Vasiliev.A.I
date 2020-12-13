#include <stdio.h>

int sign(float x)
{
	if (x < 0)
	{
		return -1;
	}
	else if (x > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	float a, b;
	int x;

	printf("enter a, b: ");
	scanf_s("%f %f", &a, &b);

	x = sign(a) + sign(b);

	printf("sign A + sign B = %i", x);

	return 0;
}
