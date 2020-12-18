#include <stdio.h>
#include <malloc.h>
#include <math.h>

int main()
{
	int n, * x, * y, i, maxdist=0, ansx=0,ansy=0;

	printf("enter the count of points: ");
	scanf_s("%i", &n);
	x = (int*)malloc(n * sizeof(int));
	y = (int*)malloc(n * sizeof(int));

	for (i = 0; i < n; i++)
	{
		printf("enter the coordinates of point #%i: ", i+1);
		scanf_s("%i %i", &x[i], &y[i]);
	}

	for (i = 0; i < n; i++)
	{
		if (x[i] < 0 && y[i]>0 && maxdist < sqrt(pow(x[i], 2) + pow(y[i], 2)))
		{
			maxdist = sqrt(pow(x[i], 2) + pow(y[i], 2));
			ansx = x[i];
			ansy = y[i];
		}
	}

	printf("the farthest point in 2nd quarter = %i %i", ansx, ansy);
	return 0;
}