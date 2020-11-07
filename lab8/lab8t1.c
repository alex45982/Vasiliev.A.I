#include <stdio.h>

int main()
{
	float a;
	int b;

	printf("enter file size (bytes): ");
	scanf_s("%f", &a);

	b = a / 1024;

	printf("file size (kb) = %i", b);

	return 0;
}