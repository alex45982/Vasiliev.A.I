#include <stdio.h>
#include <math.h>
int main() {
	int x, a, y;

	printf("enter x: ");
	scanf_s("%i", &x);

	a = x - 3;
	y = 4 * pow(a, 6) - 7 * pow(a, 3) + 2;

	printf("y=%i", y);

	return 0;
}
