#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int x;

	printf("enter the numeral: ");
	scanf_s("%i", &x);

	if (x % 2 == 0)
	{
		printf("чётное ");
		if (x < 10)
		{
			printf("однозначное");
		}
		else if (x < 100)
		{
			printf("двузначное");
		}
		else
		{
			printf("трёхзначное");
		}
	}
	else
	{
		printf("нечётное ");

		if (x < 10)
		{
			printf("однозначное");
		}
		else if (x < 100)
		{
			printf("двузначное");
		}
		else
		{
			printf("трёхзначное");
		}
	}
	printf(" число");

	return 0;

}