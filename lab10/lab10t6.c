#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int a, b, c;

	printf("enter a, b, c: ");
	scanf_s("%i %i %i", &a, &b, &c);

	if ((a*a==b*b+c*c) || (b*b==a*a+c*c) ||(c*c==a*a+b*b) )
	{
		printf("'����������� �� ��������� a, b, c �������� �������������' is true");
	}
	else
	{
		printf("'����������� �� ��������� a, b, c �������� �������������' is false");
	}
	return 0;

}

