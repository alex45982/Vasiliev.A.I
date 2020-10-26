#include <stdio.h>
#include <math.h>
int main() {
	int x,y;

	printf("enter x: ");
	scanf_s("%i", &x);

	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

	printf("y=%i", y);

	return 0;
}
