#include <stdio.h>

int main() {
	int a, b, c, x = 0;

	printf("enter a, b, c: ");
	scanf_s("%i %i %i", &a, &b, &c);

	x = a;
	a = b;
	b = c;
	c = x;

	printf("a=%i\nb=%i\nc=%i\n", a, b, c);

	return 0;
}
