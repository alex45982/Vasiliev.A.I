#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int n, a, b, c, d;

	printf("enter the numeral: ");
	scanf_s("%i", &n);

	a = n / 1000;
	b = (n - a * 1000) / 100;
	c = (n - a * 1000 - b * 100) / 10;
	d = (n - a * 1000 - b * 100 - c * 10);

	if ((a == d) && (b == c))
	{
		printf("'Данное число читается одинаково слева направо и справа налево' is true");
	}
	else
	{
		printf("'Данное число читается одинаково слева направо и справа налево' is false");
	}
	return 0;

}
