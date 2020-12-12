#include <stdio.h>

int main()
{
	int a, b, i, j;

	printf("enter a, b: ");
	scanf_s("%i %i", &a, &b);

	for (i = a; i < b + 1; i++)
	{
		for (j = 1; j < i + 1; j++)
		{
			printf("%i ", i);
		}
	}
	return 0;
}