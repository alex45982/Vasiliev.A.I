#include <stdio.h>

int main()
{
	int k,s;

	printf("enter the year: ");
	scanf_s("%i", &k);

	s = (k - 1) / 100 + 1;

	printf("%i belongs to the %ith century", k, s);

	return 0;
}
