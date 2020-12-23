#include <stdio.h>
#include <malloc.h>

int main()
{
	int* a, m, n, i, j, x = 0, sum = 0, count=0;
	float aver;

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

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum += *(a + i * m + j);
		}
	}

	aver = (float)sum / (n * m);

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if(*(a+i*m+j)>aver)
			{
				count += 1;
			}
		}
	}

	printf("count of elements that are bigger than average = %i ", count);
	free(a);

	return 0;
}