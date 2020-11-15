#include <stdio.h>

int main()
{
	int a, b, c, ac, bc, s, x;

	printf("a,b,c = ");
	scanf_s("%i %i %i", &a, &b, &c);

	ac = a / c;
	bc = b / c;

	x = ac * bc;
	s = a*b-c*c*x;

	printf("there are %i squares in rectangle ", x);
	printf("area of free space is %i", s);

	return 0;
}

