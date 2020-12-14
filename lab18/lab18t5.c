#include <stdio.h>
#include <malloc.h>

int main()
{
	int n, i, x, y, next;
	int* a;

	printf("enter array's size: ");
	scanf_s("%i", &n);

	a = (int*)malloc(n * sizeof(int));

	printf("enter the array A: ");

	for (i = 0; i < n; i++)
	{
		scanf_s("%i", &a[i]);
	}
	
	
	for (i = 0; i < n; i++)
	{
		if (a[i] > a[0])
		{
			x = i;
			break;
		}
	}

	next = a[x];
	y = a[0];
	for (i = 1; i < x; i++)
	{
		a[i-1] = a[i];
	}
	
	a[x-1] = y;

	for (i = x; i < n-1; i++)
	{
		a[i] = next;
		next = a[i + 1];
	}

	a[n - 1] = next;

	printf("array: { ");
	for (i = 0; i < n; i++)
	{
		printf("%i ", a[i]);
	}
	printf("}");

	return 0;
}
