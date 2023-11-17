#include <stdio.h>
#include <math.h>

void GetSD(double* SD, int n1, int n2, int n3, int n4, int n5)
{
	double u = *SD;
	*SD = ((double) sqrt(((double) pow((n1 - u), 2) + (double) pow((n2 - u), 2) + (double) pow((n3 - u), 2) + (double) pow((n4 - u), 2) + (double) pow((n5 - u), 2)) / 5));
}

int main(void)
{
	int n1, n2, n3, n4, n5;
	double SD = 0;

	printf("Enter 5 real numbers: ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

	SD = (n1 + n2 + n3 + n4 + n5) / 5;

	GetSD(&SD, n1, n2, n3, n4, n5);

	printf("Standard Deviation = %.3lf", SD);

	return 0;
}