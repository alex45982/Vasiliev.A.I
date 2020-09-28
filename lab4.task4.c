#include <stdio.h>
int main()
{
	int a = 20, b = 10;
	int asq = a * a, bsq = b * b;
	int summ = asq + bsq, diff = asq - bsq, mult = asq * bsq;
	float del = (float)asq / bsq;
	printf("summ=%i\n", summ);
	printf("diff=%i\n", diff);
	printf("mult=%i\n", mult);
	printf("del=%f\n", del);
	return 0;
}
