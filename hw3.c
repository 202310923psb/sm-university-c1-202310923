#include <stdio.h>

int main(void)
{
	int space = 4;
	int star = 1;
	int space_1 = 0;
	int star_1 = 0;
	
	for (; space >= 0; space--)
	{
		space_1 = space;
		for (; space_1 > 0; space_1--)
			printf(" ");
		space_1 = space;
		star_1 = star;
		for (; star_1 != 0; star_1--)
			printf("*");
		for (; space_1 > 0; space_1--)
			printf(" ");
		star += 2;
		printf("\n");
	}
	return 0;
}