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
		printf("'ƒанное число €вл€етс€ четным двузначным' is true");
	}
	else
	{
		printf("'ƒанное число €вл€етс€ четным двузначным' is false");
	}
	return 0;

}