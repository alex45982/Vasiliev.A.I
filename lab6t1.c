#include <stdio.h>

int main() {
	int a, b, x = 0;

	printf("enter a, b: ");
	scanf_s("%i %i", &a, &b);

	x = a;
	a = b;
	b = x;

	printf("a=%i\nb=%i\n", a, b);

	return 0;
}