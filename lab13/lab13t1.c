#include <stdio.h>

int main()
{
	int x,i;

	printf("enter value for 1kg: ");
	scanf_s("%i", &x);

	for (i = 1; i < 11; i++)
	{
		printf("value for %.1f kg = %.3f\n", i*0.1, x * 0.1 * i);
	}

	return 0;
}