#include <stdio.h>

int main()
{
	int n, k;
	int s = 0;

	printf("enter n: ");
	scanf_s("%i", &n);

	for (k = 0; n > s; k++)
	{
		s += k;
	}

	printf("s= %i, k=%i", s, k-1);

	return 0;
}