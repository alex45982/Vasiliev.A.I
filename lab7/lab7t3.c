#include <stdio.h>
int main() {
	int x,a,y;
	float d;

	printf("enter x(kg of sweets): ");
	scanf_s("%i", &x);

	printf("enter a(value of 1 kg, rubles): ");
	scanf_s("%i", &a);

	d = (float)a / x;

	printf("1 kg costs %f rubles\n", d);
	
	printf("enter y(kg of sweets): ");
	scanf_s("%i", &y);

	d = d * y;

	printf("y kg costs %f rubles", d);

	return 0;
}