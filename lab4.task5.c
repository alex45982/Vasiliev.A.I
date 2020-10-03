#include <stdio.h>
int main()
{
	int a, b;

	printf("enter a:");
	scanf_s("%i", &a);

	printf("enter b:");
	scanf_s("%i", &b);

	int am = abs(a), bm = abs(b);
	int summ = am + bm, diff = am - bm, mult = am * bm;
	float del = (float)am / bm;
	printf("summ=%i\n", summ);
	printf("diff=%i\n", diff);
	printf("mult=%i\n", mult);
	printf("del=%f\n", del);
	return 0;
}
