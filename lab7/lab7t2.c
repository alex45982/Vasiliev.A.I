#include <stdio.h>

int main() {

	float a;

	printf("enter a (in radians): ");
	scanf_s("%f", &a);

	a = a * 180 / 3.14;

	printf("a in degrees = %f", a);

	return 0;
}