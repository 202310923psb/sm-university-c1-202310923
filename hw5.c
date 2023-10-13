#include <stdio.h>

void ToBinary(int num)
{
	if (num < 2)
		printf("%d", num);
	else
	{
		ToBinary((int)num / 2);
		printf("%d", num % 2);
	}

}

int main(void)
{
	int num;

	printf("Please enter a number: ");
	scanf("%d", &num);

	ToBinary(num);

	return 0;
}