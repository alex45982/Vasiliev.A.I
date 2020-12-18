#include <stdio.h>
#include <malloc.h>

int main()
{
	int* a, * b, * c, n, x=1, i, j=1;

	printf("enter array A's size: ");
	scanf_s("%i", &n);

	a = (int*)malloc(n * sizeof(int));
	
	printf("enter the array A: ");
	for (i = 0; i < n; i++)
	{
		scanf_s("%i", &a[i]);
	}

	for (i = 1; i < n; i++)
	{
		if (a[i] != a[i - 1])
		{
			x += 1;
		}
	}

	b = (int*)malloc(x * sizeof(int));
	c = (int*)malloc(x * sizeof(int));

	for (i = 0; i < x; i++)
	{
		b[i] = 1;
	}

	c[0] = a[0];

	for (i = 1; i < n; i++)
	{
		if (a[i] != a[i - 1])
		{
			c[j] = a[i];
			j++;
		}
		else
		{
			b[j-1] += 1;
		}
	}

	printf("array B (lengths): { ");
	for (i = 0; i < x; i++)
	{
		printf("%i ", b[i]);
	}
	printf("}\n");

	printf("array C (values): { ");
	for (i = 0; i < x; i++)
	{
		printf("%i ", c[i]);
	}
	printf("}\n");

	return 0;
}