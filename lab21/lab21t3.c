#include <stdio.h>
#include <malloc.h>

int main()
{
	int* a, m, n, i, j, x=0, prod=1, minprod=1;

	printf("enter matrix width: ");
	scanf_s("%i", &m);

	printf("enter matrix height: ");
	scanf_s("%i", &n);

	a = (int*)malloc(m * n * sizeof(int));

	printf("enter the matrix: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf_s("%i", (a + i * m + j));
		}
	}

	j = 0;
	for (i = 0; i < n; i++)
	{
		minprod *= *(a + i * m + j);
	}

	for (j = 0; j < n; j++)
	{
		prod = 1;
		for (i = 0; i < m; i++)
		{
			prod *= *(a + i * m + j);
		}
		if (minprod > prod)
		{
			minprod = prod;
			x = j;
		}
	}

	printf("minimal product = %i is in column #%i ", minprod, x+1);
	free(a);

	return 0;
}