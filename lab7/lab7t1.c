#include <stdio.h>

int main() {

	float a, b;

	printf("enter a (in degrees): ");

	scanf_s("%f", &a);

	a = a / 180;

	b = a * 3.14;

	printf("a in radians = %f*pi or %f", a, b);

	return 0;

}