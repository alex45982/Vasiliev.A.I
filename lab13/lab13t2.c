#include <stdio.h>

int main()
{
	int n, i;
	float x=1;

	printf("enter n: ");
	scanf_s("%i", &n);

	for (i = 1; i < n+1; i++)
	{
		x=x*(1+0.1*i);
	}

	printf("multiple = %f", x);

	return 0;
}