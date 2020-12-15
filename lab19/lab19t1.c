#include <stdio.h>
#include <malloc.h>

int main()
{
	int n, x=1, j=1;
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

	for (i = 1; i < n; i++)
	{
		if (a[i] == a[i - 1])
		{
			continue;
		}
		x += 1;
	}

	b = (int*)malloc(x * sizeof(int));
	
	b[0] = a[0];

	for (i = 1; i < n; i++)
	{
		if (a[i] == a[i - 1])
		{
			continue;
		}
		b[j] = a[i];
		j += 1;
	}

	printf("modified array A: { ");
	for (i = 0; i < x; i++)
	{
		printf("%i ", b[i]);
	}
	printf("}\n");

	free(a);
	free(b);

	return 0;
}
