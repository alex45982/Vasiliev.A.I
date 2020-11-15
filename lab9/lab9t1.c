#include <stdio.h>

int main()
{
	int n, s;

	printf("time passed since last day (seconds): ");
	scanf_s("%i", &n);

	s = n % 60;

	printf("time passed since last mintute (seconds): %i", s);

	return 0;
}
