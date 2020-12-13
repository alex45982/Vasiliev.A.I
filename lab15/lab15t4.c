#include <stdio.h>

int quarter(float x, float y)
{
	if (x > 0)
	{
		if (y > 0)
		{
			return 1;
		}
		else
		{
			return 4;
		}
	}
	else 
		if (y > 0)
		{
			return 2;
		}
		else
		{
			return 3;
		}
}

int main()
{
	float a, b;
	int i, c;

	for (i = 1; i < 4; i++)
	{
		printf("enter coorinates: ");
		scanf_s("%f %f", &a, &b);

		c = rings(a, b);

		printf("point is in quarter #%i\n", c);
	}
	return 0;
}