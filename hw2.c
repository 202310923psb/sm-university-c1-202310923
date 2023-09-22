#include <stdio.h>

int main(void)
{
	double km, mile;

	printf("Please enter kilometers: ");
	scanf("%lf", &km);

	mile = km / 1.609;
	
	printf("%.1lf km is equal to %.1lf miles. \n", km, mile);

	return 0;
}