#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int x;

	printf("enter the numeral: ");
	scanf_s("%i", &x);

	if (x == 0)
	{
		printf("������� ");
	}
	else if (x > 0)
	{
		printf("������������� ");
		if (x%2==0)
		{
			printf("������ ");
		}
		else
		{
			printf("�������� ");
		}
	}
	else 
	{
		printf("������������� ");
		if (x % 2 == 0)
		{
			printf("������ ");
		}
		else
		{
			printf("�������� ");
		}
	}
	printf("�����");

	return 0;

}