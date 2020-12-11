#include <stdio.h>

int main()
{
	int n, i;
	int s = 0, x = 1;
	printf("enter n: ");
	scanf_s("%i", &n);

	for (i = 1; i < n + 1; i++)
	{
		s = s + x;
		x = x + 2;
		printf("sum = %i\n", s);
	}

	printf("square = %i", s);

	return 0;
}