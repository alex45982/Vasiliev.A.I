#include <stdio.h>
int main()
{
	int a, b;

	printf("enter a:");
	scanf_s("%i", &a);

	printf("enter b:");
	scanf_s("%i", &b);

	float x = ((float)a + b) / 2;
	printf("(a+b)/2=%f\n", x);
	
	return 0;
}
