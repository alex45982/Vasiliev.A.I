#include <stdio.h>

int main()
{
	int a, b, c, ab, bc, s;


	printf("enter a,b,c:");
	scanf_s("%i %i %i", &a, &b, &c);

	ab = abs(a - b);
	bc = abs(b - c);
	s = ab + bc;
	printf("length of ab=%i\nlength of bc=%i\nab+bc=%i",ab, bc,s);

	return 0;
}
