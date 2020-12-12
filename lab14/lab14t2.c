#include <stdio.h>

int main()
{
	int a, b;
	int i = 0;

	printf("enter a, b: ");
	scanf_s("%i %i", &a, &b);

	while (i * b < a)
	{
		i += 1;
	}

	
	printf("free A space = %i", a - b * (i-1));

	return 0;
}