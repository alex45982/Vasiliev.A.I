#include <stdio.h>

int main()
{
	int v1, v2, s, t, s2;

	printf("enter the 1st velocity: ");
	scanf_s("%i", &v1);

	printf("enter the 2nd velocity: ");
	scanf_s("%i", &v2);

	printf("enter initial distance: ");
	scanf_s("%i", &s);

	printf("enter travelling time: ");
	scanf_s("%i", &t);

	s2 = s + (v1 + v2) * t;

	printf("distance between automobiles after %i hours = %i", t, s2);

	return 0;
}


