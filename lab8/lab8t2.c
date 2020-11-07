#include <stdio.h>

int main()
{
	float a;
	int b,x;

	printf("enter a: ");
	scanf_s("%f", &a);

	printf("enter b (a>b): ");
	scanf_s("%i", &b);

	x = a / b;

	printf("there are %i sections b in section a", x);

	return 0;
}