#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int n, a, b, c;

	printf("enter the numeral: ");
	scanf_s("%i", &n);

	a = n / 100;
	b = (n - a * 100) / 10;
	c = (n - a * 100 - b * 10);

	if ((a > b) && (b > c) || (a < b) && (b < c))
	{
		printf("'Цифры данного числа образуют возрастающую или убывающую последовательность' is true");
	}
	else
	{
		printf("'Цифры данного числа образуют возрастающую или убывающую последовательность' is false");
	}
	return 0;
