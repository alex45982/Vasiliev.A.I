#include <stdio.h>

int main()
{
	int k;
	float p;
	float s = 1000;

	printf("enter p: ");
	scanf_s("%f", &p);

	for (k = 1; s <= 1100; k++)
	{
		s *= (1 + p * 0.01);
	}

	printf("s= %f, k=%i", s, k - 1);

	return 0;
}
