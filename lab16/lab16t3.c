#include <stdio.h>
#include <malloc.h>

int main()
{
	int s, a, b, c, sum;
	int i = 2, j=0;
	int* x;

	printf("enter array's size, a and b : ");
	scanf_s("%i %i %i", &s, &a, &b);

	x = (int*)malloc(s * sizeof(int));

	x[0] = a;
	x[1] = b;
	sum = a + b;
	while (i < s)
	{
		x[i] = sum;
		sum += sum;
		i++;
	}

	printf("{ ");
	for (i = 0; i < s; i++)
	{
		printf("%i ", x[i]);
	}
	printf("}");

	free(b);

	return 0;
}
