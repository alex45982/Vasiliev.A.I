#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int a;

	printf("enter the numeral: ");
	scanf_s("%i", &a);

	if (a % 2 == 0 && a > 9 && a < 100)
	{
		printf("'������ ����� �������� ������ ����������' is true");
	}
	else
	{
		printf("'������ ����� �������� ������ ����������' is false");
	}
	return 0;

}