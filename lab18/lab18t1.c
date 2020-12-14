#include <stdio.h>
#include <malloc.h>

int main()
{
	int n, x;
	int i;
	int* a, *b;

	printf("enter arrays' size: ");
	scanf_s("%i", &n);

	a = (int*)malloc(n * sizeof(int));
	b = (int*)malloc(n * sizeof(int));

	printf("enter the array A: ");

	for (i = 0; i < n; i++)
	{
		scanf_s("%i", &a[i]);
	}

	printf("enter the array B: ");

	for (i = 0; i < n; i++)
	{
		scanf_s("%i", &b[i]);
	}

	for (i = 0; i < n; i++)
	{
		x = a[i];
		a[i] = b[i];
		b[i] = x;
	}

	printf("array A: { ");
	for (i = 0; i < n; i++)
	{
		printf("%i ", a[i]);
	}
	printf("}\n");

	printf("array B: { ");
	for (i = 0; i < n; i++)
	{
		printf("%i ", b[i]);
	}
	printf("}");

	free(a);
	free(b);

	return 0;
}
