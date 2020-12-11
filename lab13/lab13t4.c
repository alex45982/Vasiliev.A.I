#include <stdio.h>
#include <math.h>

int main()
{
	float a;
	int n, i;
	float s = 0;
	printf("enter a, n: ");
	scanf_s("%f %i", &a, &n);

	for (i = 0; i < n + 1; i++)
	{
		s = s+pow(a, i);
	}

	printf("answer = %f", s);

	return 0;
}