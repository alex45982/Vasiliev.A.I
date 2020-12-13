#include <stdio.h>
#include <malloc.h>

int main()
{
	int s, a, d;
	int i = 0, j = 1;
	int* b;

	printf("enter array's size, first member and the denominator : ");
	scanf_s("%i %i %i", &s, &a, &d);

	b = (int*)malloc(s * sizeof(int));

	while (i < s)
	{
		b[i] = a;
		a *= d;
		i++;
	}

	printf("{ ");
	for (i = 0; i < s; i++)
	{
		printf("%i ", b[i]);
	}
	printf("} ");

	free(b);

	return 0;
}
