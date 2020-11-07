#include <stdio.h>

int main()
{
	int a, b, x;

	printf("enter the number: ");
	scanf_s("%i", &x);

	a = x % 100;
	b = x / 100;
	x =  a* 10 + b;

	printf("inverted number: %i ", x);

	return 0;
}