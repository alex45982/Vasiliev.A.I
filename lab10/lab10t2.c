#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int a, b, c;

	printf("enter a, b, c: ");
	scanf_s("%i %i %i", &a, &b, &c);

	if (a < b && b < c)
	{
		printf("'����������� ������� ����������� A < B < C' is true");
	}
	else
	{
		printf("'����������� ������� ����������� A < B < C' is false");
	}
	return 0;

}