#include <stdio.h>
#include <malloc.h>

int main()
{
	int s;
	int i = 0, j = 1;
	int *a;

	printf("enter array's size: ");
	scanf_s("%i", &s);

	a = (int*)malloc(s * sizeof(int));

	while (i<s)
	{
		a[i] = j;
		j += 2;
		i++;
	}
	
	printf("{ ");
	for (i = 0; i < s; i++)
	{
		printf("%i ", a[i]);
	}
	printf("} ");

	free(a);

	return 0;
}
