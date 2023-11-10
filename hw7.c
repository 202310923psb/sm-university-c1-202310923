#include <stdio.h>

int main(void)
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };
	
	int* ptr1 = &arr1[0], * ptr2 = &arr2[0];
	int temp;

	printf("arr1: ");
	for (int r = 0; r < 6; r++) {
		printf("%d ", arr1[r]);
	}
	printf("\narr2: ");
	for (int r = 0; r < 6; r++) {
		printf("%d ", arr2[r]);
	}
	printf("\n\n\n");


	for (int i = 0; i < 6; i++) {
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;

		ptr1++;
		ptr2++;
	}

	printf("after swap \narr1: ");
	for (int r = 0; r < 6; r++) {
		printf("%d ", arr1[r]);
	}
	printf("\narr2: ");
	for (int r = 0; r < 6; r++) {
		printf("%d ", arr2[r]);
	}
	printf("\n");

	return 0;
}