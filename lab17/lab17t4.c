#include <stdio.h>
#include <malloc.h>

int main()
{
	int n, m;
	int i = 0;
	int* a;

	printf("enter array's size: ");
	scanf_s("%i", &n);

	a = (int*)malloc(n * sizeof(int));

	printf("enter the array: ");

	while (i < n)
	{
		scanf_s("%i", &a[i]);
		i++;
	}

	m = a[0];

	for (i = 1; i < n - 1; i += 2)
	{
		if (a[i] > a[i + 1] && a[i] > a[i - 1])
		{
			m = a[i];
		}
	}

	printf("local max = %i", m);

	free(a);

	return 0;
}
