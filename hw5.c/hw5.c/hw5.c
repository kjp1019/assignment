#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int odd(int a)
{
	if (a % 2 == 1)
		printf("%d ", a);
}
int even(int a)
{
	if (a % 2 == 0)
		printf("%d ", a);
}
int main(void)
{
	int arr[5];
	int i;

	printf("5개의 정수를 입력하세요:");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n홀수 출력:");
	for (i = 0; i < 5; i++)
	{
		odd(arr[i]);
	}
	printf("\n짝수 출력:");
	for (i = 0; i < 5; i++)
	{
		even(arr[i]);
	}
	return 0;
}