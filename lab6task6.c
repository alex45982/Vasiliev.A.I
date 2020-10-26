#include <stdio.h>
#include <math.h>
int main() {
	int A, A2, A8;

	printf("enter A: ");
	scanf_s("%i", &A);

	A2 = A * A;
	A2 = A2 * A2;
	A8 = A2 * A2;

	printf("A8=%i", A8);

	return 0;
}

