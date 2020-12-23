#include <stdio.h>
#include <malloc.h>

int main()
{
	int* a, m, n, i, j, k, sum=0, prod=1;

	printf("enter matrix width: ");
	scanf_s("%i", &m);

	printf("enter matrix height: ");
	scanf_s("%i", &n);

	printf("enter k: ");
	scanf_s("%i", &k);

	a = (int*)malloc(m * n * sizeof(int));

	printf("enter the matrix: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf_s("%i", (a + i * m + j));
		}
	}

	i = k-1;
	for (j = 0; j < n; j++)
	{
		sum += *(a + i * m + j);
		prod *= *(a + i * m + j);
	}

	printf("sum = %i, product = %i", sum, prod);
	free(a);

	return 0;
}