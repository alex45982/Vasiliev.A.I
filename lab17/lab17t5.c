#include <stdio.h>
#include <malloc.h>

int main()
{
	int n;
	int i = 0, j;
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

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				printf("#%i and #%i", i, j);
				break;
			}
		}
		if (a[i] == a[j])
		{
			break;
		}
	}

	free(a);

	return 0;
}
