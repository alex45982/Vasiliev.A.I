#include <stdio.h>

int main()
{
	int a, b, c, ac, bc;

	printf("enter a,b,c (a<c<b): ");
	scanf_s("%i %i %i", &a, &b, &c);

	ac = abs(a - c);
	bc = abs(b - c);
	printf("ac*bc=%i", ac * bc);

	return 0;
}