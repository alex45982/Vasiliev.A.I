#include <stdio.h>

int main()
{
	int n, k, s, a ;

	printf("number of the day k in year: ");
	scanf_s("%i", &k);

	printf("number of the first day of year in the week: ");
	scanf_s("%i", &n);

	a = k % 7;

	s = (a + n) % 7 - 1;

	printf("number of the day k in week: %i", s);

	return 0;
}
