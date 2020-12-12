#include <stdio.h>

int main()
{
	int n, a;
	int f = 1, f1=0, k = 0;

	printf("enter n: ");
	scanf_s("%i", &n);

	while (n > f)
	{	
		a = f;
		f += f1;
		f1 = a;
		k++;
	}

	printf("number of the numeral = %i", k);

	return 0;
}