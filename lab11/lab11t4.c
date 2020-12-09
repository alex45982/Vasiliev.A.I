#include <stdio.h>

int main()
{
	int x,y;

	printf("enter coordinates: ");
	scanf_s("%i %i", &x, &y);

	if (x > 0)
	{
		if (y > 0)
		{
			printf("point is in the first (1) quarter");
		}
		else
		{
			printf("point is in the fourth (4) quarter");
		}
	}
	else 
	{
		if (y > 0)
		{
			printf("point is in the second (2) quarter");
		}
		else
		{
			printf("point is in the third (3) quarter");
		}
	}

	return 0;

}