#include <stdio.h>
#include <malloc.h>

int main()
{
	int n, d;
	int i = 0, j = 0;
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

	d = a[1] - a[0];

	for (i = 2; i < n; i++)
	{
		if (a[i] - a[i - 1] == d)
		{
			j += 1;
		}
	}

	if (j == n - 2)
	{
		printf("d=%i", d);
	}
	else
	{
		printf("0");
	}

	free(a);

	return 0;
}
