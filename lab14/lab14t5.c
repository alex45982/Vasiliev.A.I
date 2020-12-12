#include <stdio.h>

int main()
{
	int a, b;

	printf("enter a, b: ");
	scanf_s("%i %i", &a, &b);

	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}


	printf("lcd= %i", a);

	return 0;
}
