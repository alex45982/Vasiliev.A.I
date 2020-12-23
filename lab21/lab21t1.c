#include <stdio.h>
#include <malloc.h>

int main()
{
	int* a, m, i, j, k;

	printf("enter matrix order: ");
	scanf_s("%i", &m);

	a = (int*)malloc(m * m * sizeof(int));

	printf("enter the matrix: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf_s("%i", (a + i * m + j));
		}
	}

	for (k = 0; k < m-1; k++)
	{
		i = k;
		j = k;
		while (i < m-k-1)
		{
			printf("%i ", *(a + i * m + j));
			i++;
		}
		while (j < m - k-1)
		{
			printf("%i ", *(a + i * m + j));
			j++;
		}
		while (i > k)
		{
			printf("%i ", *(a + i * m + j));
			i--;
		}
		while (j > k)
		{
			printf("%i ", *(a + i * m + j));
			j--;
		}
	}
	
	printf("%i", *(a + (m/2) * m + (m/2)));

	free(a);

	return 0;
}