#include <stdio.h>

int main()
{
	int a, b, x;

	printf("enter a: ");
	scanf_s("%i", &a);

	printf("enter b (a>b): ");
	scanf_s("%i", &b);

	x = a % b;

	printf("length of free space on section a = %i ", x);

	return 0;
}