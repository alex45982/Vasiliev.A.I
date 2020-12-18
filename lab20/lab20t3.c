#include <stdio.h>
#include <malloc.h>

int main()
{
	int* a, * b, * c, n, x = 1, i, j = 1, y = 0, k, * d, z = 0;

	printf("enter array A's size: ");
	scanf_s("%i", &n);

	a = (int*)malloc(n * sizeof(int));

	printf("enter the array A: ");
	for (i = 0; i < n; i++)
	{
		scanf_s("%i", &a[i]);
	}

	printf("enter k: ");
	scanf_s("%i", &k);

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
			b[j - 1] += 1;
		}
	}

	d = (int*)malloc(n * sizeof(int));

	for (i = 0; i < x; i++)
	{
		if (i == k-1)
		{
			for (j = 0; j < b[x-1]; j++)
			{
				d[z] = c[x-1];
				z++;
			}
		}
		else
		{
			for (j = 0; j < b[i]; j++)
			{
				d[z] = c[i];
				z++;	
			}
		}
	}

	for (j = 0; j < b[k-1]; j++)
	{			
		d[n-1-j] = c[k-1];
	}

	printf("modified array A: { ");
	for (i = 0; i < n; i++)
	{
		printf("%i ", d[i]);
	}
	printf("}\n");

	return 0;
}
