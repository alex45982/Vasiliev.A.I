#include <stdio.h>

int main()
{
	int a, b, c, x;

	printf("enter a, b, c: ");
	scanf_s("%i %i %i", &a, &b, &c);

	if (a>b)
	{
		if (b > c)
		{
			x = a + b;
		}
		else
		{
			x = a + c;
		}
	}
	else if (a > c)
		{
			x = a + b;
		}
		else
		{
			x = b + c;
		}

	printf("sum of the largest numbers = %i", x);

	return 0;

}
