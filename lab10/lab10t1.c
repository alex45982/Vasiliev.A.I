#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int a, b;

	printf("enter a, b: ");
	scanf_s("%i %i", &a, &b);

	if (a > 2 && b <= 3)
	{
		printf("'справедливы неравентсва А>2 и В<=3' is true");
	}
	else
	{
		printf("'справедливы неравентсва А>2 и В<=3' is false");
	}
	return 0;

}