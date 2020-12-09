#include <stdio.h>

int main()
{
	int a, b;

	printf("enter a, b: ");
	scanf_s("%i %i", &a, &b);

	if (a==b)
	{
		a = 0;
		b = 0;
	}
	else if (a>b)
	{
		b = a;
	}
	else
	{
		a = b;
	}
	printf("new variables: a=%i, b=%i", a, b);

	return 0;

}
