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
		printf("нулевое ");
	}
	else if (x > 0)
	{
		printf("положительное ");
		if (x%2==0)
		{
			printf("чётное ");
		}
		else
		{
			printf("нечётное ");
		}
	}
	else 
	{
		printf("отрицательное ");
		if (x % 2 == 0)
		{
			printf("чётное ");
		}
		else
		{
			printf("нечётное ");
		}
	}
	printf("число");

	return 0;

}