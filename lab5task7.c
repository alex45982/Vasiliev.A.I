#include <stdio.h>
#include <math.h>
int main() {
	int A, A2, A3, A15;

	printf("enter A: ");
	scanf_s("%i", &A);

	A2 = A * A;
	A3 = A2 * A;
	A3 = A2 * A3;
	A15 = A3 * A3 * A3;

	printf("A15=%i", A15);

	return 0;
}
