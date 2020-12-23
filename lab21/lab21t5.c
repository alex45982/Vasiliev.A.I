#include <stdio.h>
#include <malloc.h>

int main()
{
	int* a, m, n, i, j, x = 0;

	printf("enter matrix width: ");
	scanf_s("%i", &m);

	printf("enter matrix height: ");
	scanf_s("%i", &n);

	a = (int*)malloc(m * n * sizeof(int));

	printf("enter the matrix: \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf_s("%i", (a + i * m + j));
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%i ", *(a + i * m + j));
		}
		printf("\n");
	}

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < m; i++)
		{
			if (*(a + i * m + j) % 2 == 0)
			{
				break;
			}
		}
		if (i == m)
		{
			x = j+1;
			break;
		}
	}

	if (x == 0)
	{
		printf("0");
	}
	else
	{
		printf("#%i is the 1st column", x);
	}

	free(a);

	return 0;
}