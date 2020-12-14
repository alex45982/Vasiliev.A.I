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

	m=a[1];

	for (i = 3; i < n; i+=2)
	{
		if (a[i] < m)
		{
			m = a[i];
		}
	}

	printf("min = %i", m);

	free(a);

	return 0;
}
