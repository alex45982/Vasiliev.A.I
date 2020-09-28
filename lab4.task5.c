#include <stdio.h>
int main()
{
	int a = 20, b = -10;
	int am = abs(a), bm = abs(b);
	int summ = am + bm, diff = am - bm, mult = am * bm;
	float del = (float)am / bm;
	printf("summ=%i\n", summ);
	printf("diff=%i\n", diff);
	printf("mult=%i\n", mult);
	printf("del=%f\n", del);
	return 0;
}
