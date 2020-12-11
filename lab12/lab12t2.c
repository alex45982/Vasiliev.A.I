#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");

	int c, x;
	char d;

	printf("enter the start direction: ");
	scanf_s("%c", &d);

	printf("enter the command: ");
	scanf_s("%i", &c);

	if (d == 'N')
	{
		x = 0;
	}

	if (d == 'W')
	{
		x = 1;
	}

	if (d=='S')
	{
		x = 2;
	}

	if (d == 'E')
	{
		x = 3;
	}
	x = x + c;

	if (x % 4 == 0)
	{
		printf("направление робота - север");
	}
	if (x % 4 == 2)
	{
		printf("направление робота - юг");
	}
	if (x % 4 == 1)
	{
		if (x > 0)
		{
			printf("направление робота - запад");
		}
		else
			printf("направление робота - восток");
	}
	if (x % 4 == 3)
	{
		if (x > 0)
		{
			printf("направление робота - восток");
		}
		else
			printf("направление робота - запад");
	}

	return 0;
}