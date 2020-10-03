#include <stdio.h>
int main()
{
	int d;

	printf("enter d:");
	scanf_s("%i", &d);

	double pi = 3.14;
	printf("L=%f\n", pi * d);

	return 0;
}
