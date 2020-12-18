#include <stdio.h>
#include <malloc.h>
#include <math.h>

float dist(a, b, c, d)
{
	float e;
	e = sqrt(pow(a - b, 2) + pow(c - d, 2));
	return e;
}

int main()
{
	int n, * x, * y, i, j, k, x1, x2, x3, y1, y2, y3;
	float per, maxper=0;

	printf("enter the count of points: ");
	scanf_s("%i", &n);
	x = (int*)malloc(n * sizeof(int));
	y = (int*)malloc(n * sizeof(int));

	for (i = 0; i < n; i++)
	{
		printf("enter the coordinates of point #%i: ", i + 1);
		scanf_s("%i %i", &x[i], &y[i]);
	}

	for (i = 0; i < n-2; i++)
	{
		for (j = i + 1; j < n - 1; j++)
		{
			for (k = i + j + 1; k < n; k++)
			{
				per = dist(x[i], x[j], y[i], y[j]) + dist(x[j], x[k], y[j], y[k]) + dist(x[i], x[k], y[i], y[k]);
				if (per > maxper)
				{
					maxper = per;
					x1 = x[i];
					x2 = x[j];
					x3 = x[k];
					y1 = y[i];
					y2 = y[j];
					y3 = y[k];
				}
			}
		}
	}

	printf("the maximal perimeter = %f, the points - %i %i; %i %i; %i %i", maxper, x1, y1, x2, y2, x3, y3);
	
	return 0;
}