#include <stdio.h>
#include <malloc.h>

int main()
{
	int n;
	int c = 0, s = 0;
	int i;
	float am;
	int* a;
	float* b;

	printf("enter arrays' size: ");
	scanf_s("%i", &n);

	a = (int*)malloc(n * sizeof(int));
	b = (int*)malloc(n * sizeof(int));

	printf("enter the array A: ");

	for (i = 0; i < n; i++)
	{
		scanf_s("%i", &a[i]);
	}

	for (i = 0; i < n; i++)
	{
		c += 1;
		s += a[i];
		am = (float)s / c;
		b[i] = am;
	}

	printf("array B: { ");
	for (i = 0; i < n; i++)
	{
		printf("%f ", b[i]);
	}
	printf("}");

	free(a);
	free(b);

	return 0;
}
