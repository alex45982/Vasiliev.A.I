#include <stdio.h>
#include <malloc.h>

int main()
{
	int n, k, l;
	int i = 0, j = 1, s = 0;
	int* a;
	float am;

	printf("enter array's size, k and l: ");
	scanf_s("%i %i %i", &n, &k, &l);

	a = (int*)malloc(n * sizeof(int));

	while (i < n)
	{
		a[i] = j;
		j += 2;
		i++;
	}

	printf("{ ");
	for (i = 0; i < n; i++)
	{
		printf("%i ", a[i]);
	}
	printf("}\n");

	j = 0;

	for (i = k-1; i < l; i++)
	{
		s += a[i];
		j += 1;
	}
	
	am = (float)s / j;

	printf("arithmetic mean of numerals #%i-#%i = %f ", k, l, am);

	free(a);

	return 0;
}
