#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void array(int* a)
{
	int i;
	for (i = 0; i < 6; i++)
	{
		printf("%d ", *(a+i));
	}
}

void swap(int* a, int* b)
{
	int i, temp;
	for (i = 0; i < 6; i++)
	{
		temp = *(a + i);
		*(a + i) = *(b + i);
		*(b + i) = temp;
	}
}

int main(void)
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };

	printf("arr1:");
	array(arr1);
	printf("\narr2:");
	array(arr2);

	swap(arr1, arr2);

	printf("\n\nafter swap");
	printf("\narr1:");
	array(arr1);
	printf("\narr2:");
	array(arr2);
	return 0;
}