#include <stdio.h>

int main()
{
	float a,b,x;

	printf("enter a (a!=0): ");
	scanf_s("%f", &a);

	printf("enter b: ");
	scanf_s("%f", &b);

	x = - b / a;

	printf("root of the equation = %f", x);

	return 0;
}