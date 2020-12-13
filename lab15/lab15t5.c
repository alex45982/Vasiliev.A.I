#include <stdio.h>

float fact2(int n)
{
	int i;
	float x=1;

	if (n%2!=0)
	{
		for (i = 1; i < n + 1; i += 2)
		{
			x *= i;
		}
		return x;
	}
	else
	{
		for (i = 2; i < n + 1; i += 2)
		{
			x *= i;
		}
		return x;
	}
}

int main()
{
	float b;
	int a;

	printf("enter the numeral: ");
	scanf_s("%i", &a);

	b = fact2(a);

	printf("double factorial = %f", b);

	return 0;
}