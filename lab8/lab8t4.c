#include <stdio.h>

int main()
{
	int a, b, x;

	printf("enter the number: ");
	scanf_s("%i", &a);

	x = a % 10;
	b = a / 10;
	a = x * 10 + b;

	printf("inverted number: %i ", a);

	return 0;
}