#include <stdio.h>

float powera3(float a)
{
	float b = a * a * a;
	return b;
}

int main()
{
	int i;
	float n, c;
	for (i = 1; i < 6; i++)
	{
		printf("enter numeral #%i: ", i);
		scanf_s("%f", &n);

		c = powera3(n);

		printf("numeral in a cube = %f\n", c);
	}

	return 0;
}
