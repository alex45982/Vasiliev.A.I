#include <stdio.h>
#include <malloc.h>

int main()
{
	int n, x = 0;
	int i = 0;
	int* a;

	printf("enter array's size: ");
	scanf_s("%i", &n);

	a = (int*)malloc(n * sizeof(int));

	printf("enter the array A: ");

	for (i = 0; i < n; i++)
	{
		scanf_s("%i", &a[i]);
	}

	for (i = n; i >-1; i--)
	{
		if (a[i] % 2 == 1)
		{
			x = a[i];
			break;
		}
	}

	if (x != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (a[i] % 2 == 1)
			{
				a[i] += x;
			}
		}
	}

	printf("array: { ");
	for (i = 0; i < n; i++)
	{
		printf("%i ", a[i]);
	}
	printf("}");

	return 0;
}
