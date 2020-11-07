#include <stdio.h>

int main()
{
	float a1, b1, c1,a2,b2,c2,x,y;

	printf("enter a1: ");
	scanf_s("%f", &a1);

	printf("enter b1: ");
	scanf_s("%f", &b1);

	printf("enter c1: ");
	scanf_s("%f", &c1);

	printf("enter a2: ");
	scanf_s("%f", &a2);

	printf("enter b2: ");
	scanf_s("%f", &b2);

	printf("enter c2: ");
	scanf_s("%f", &c2);
	
	y = (c2 - c1 * a2 / a1) / (b2 - b1 * a2 / a1);

	x = (c1 - b1 * y) / a1;

	printf("roots of the equation: x= %f, y=%f", x,y);

	return 0;
}