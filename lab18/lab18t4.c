#include <stdio.h>
#include <malloc.h>

int main()
{
	int n, min, max, imin=0, imax=0, i = 0;
	int* a;

	printf("enter array's size: ");
	scanf_s("%i", &n);

	a = (int*)malloc(n * sizeof(int));

	printf("enter the array A: ");

	for (i = 0; i < n; i++)
	{
		scanf_s("%i", &a[i]);
	}

	min = a[0];
	max = a[0];

	for (i = 0; i < n; i++)
	{
		if (a[i]<min)
		{
			min = a[i];
			imin = i;
		}
		if (a[i] > max)
		{
			max = a[i];
			imax = i;
		}
	}

	if (imin > imax)
	{
		i = imin;
		imin = imax;
		imax = i;
	}

	for (i = imin+1; i < imax; i++)
	{
		a[i] = 0;
	}

	printf("array: { ");
	for (i = 0; i < n; i++)
	{
		printf("%i ", a[i]);
	}
	printf("}");

	return 0;
}
