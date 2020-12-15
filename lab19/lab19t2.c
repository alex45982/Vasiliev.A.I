#include <stdio.h>
#include <malloc.h>

int main()
{
	int n, x = 0, j = 0;
	int i;
	int* a, * b, * y;

	printf("enter arrays' size: ");
	scanf_s("%i", &n);

	a = (int*)malloc(n * sizeof(int));
	y = (int*)malloc(n * sizeof(int));

	printf("enter the array A: ");

	for (i = 0; i < n; i++)
	{
		scanf_s("%i", &a[i]);
	}

	for (i = 0; i < n; i++)
	{
		y[i] = 1;
	}

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				y[i] += 1;
				y[j] += 1;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		if (y[i] != 2)
		{
			x += 1;
		}
	}

	b = (int*)malloc(x * sizeof(int));

	j = 0;
	for (i = 0; i < n; i++)
	{
		if (y[i] !=2)
		{
			b[j] = a[i];
			j += 1;
		}	
	}

	printf("modified array A's size: %i\n", x);
	printf("modified array A: { ");
	for (i = 0; i < x; i++)
	{
		printf("%i ", b[i]);
	}
	printf("}\n");

	free(a);
	free(b);
	free(y);

	return 0;
}
