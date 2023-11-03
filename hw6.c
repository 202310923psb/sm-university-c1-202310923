#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int arr[5];
	int i;
	int Odd[5], Even[5];

	printf("Please input five integers: ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	for (i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0)
		{
			Even[i] = arr[i];
			Odd[i] = '\0';
		}
		else
		{
			Odd[i] = arr[i];
			Even[i] = '\0';
		}
	}

	printf("Odd numbers: ");
	i = 0;
	while (i < 5) {
		if (Odd[i] != '\0')
			printf("%d ", Odd[i]);
		i++;
	}
	printf("\nEven numbers: ");
	i = 0;
	while (i < 5) {
		if (Even[i] != '\0')
			printf("%d ", Even[i]);
		i++;
	}
	printf("\n");
	
	return 0;
}