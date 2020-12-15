#include <stdio.h>
#include <malloc.h>

int main()
{
	int n, j = 0, x = 0;
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

	for (i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			x += 1;
		}
	}

	b = (int*)malloc(n + x * sizeof(int));

	for (i = 0; i < n; i++)
	{
		b[j] = a[i];
		if (a[i] < 0)
		{
			b[j + 1] = 0;
			j++;
		}
		j++;
	}

	printf("modified array A: { ");
	for (i = 0; i < n + x; i++)
	{
		printf("%i ", b[i]);
	}
	printf("}\n");

	free(a);
	free(b);

	return 0;
}
