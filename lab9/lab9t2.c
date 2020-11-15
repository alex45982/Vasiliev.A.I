#include <stdio.h>

int main()
{
	int k, s;

	printf("number of the day in year: ");
	scanf_s("%i", &k);

	s = k % 7;

	printf("number of the day in week: %i", s);

	return 0;
}