#include <stdio.h>
#include <malloc.h>

int main()
{
	int n, j = 0, max, min, imax, imin;
	int i;
	int* a, * b;

	printf("enter arrays' size: ");
	scanf_s("%i", &n);

	a = (int*)malloc(n * sizeof(int));

	printf("enter the array A: ");

	for (i = 0; i < n; i++)
	{
		scanf_s("%i", &a[i]);
	}

	max = a[0];
	min = a[0];
	imax = 0;
	imin = 0;

	for (i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			imax = i;
		}
		if (a[i] < min)
		{
			min = a[i];
			imin = i;
		}
	}

	b = (int*)malloc(n + 2 * sizeof(int));

	for (i = 0; i < n; i++)
	{
		if (i == imin)
		{
			b[j] = 0;
			b[j + 1] = a[i];
			j += 2;
		}
		else if (i == imax)
		{
			b[j] = a[i];
			b[j + 1] = 0;
			j += 2;
		}
		else
		{
			b[j] = a[i];
			j++;
		}
	}

	printf("modified array A: { ");
	for (i = 0; i < n + 2; i++)
	{
		printf("%i ", b[i]);
	}
	printf("}\n");

	free(a);
	free(b);

	return 0;
}
