#include <stdio.h>

int main()

{

	int a, b;
	printf("enter a:");
	scanf_s("%i", &a);
	
	printf("enter b:");
	scanf_s("%i", &b);

	printf("S=%i\n", a * b);

	printf("P=%i\n", 2 * (a + b));

	return 0;

}
