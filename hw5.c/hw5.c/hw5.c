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

	printf("5���� ������ �Է��ϼ���:");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nȦ�� ���:");
	for (i = 0; i < 5; i++)
	{
		odd(arr[i]);
	}
	printf("\n¦�� ���:");
	for (i = 0; i < 5; i++)
	{
		even(arr[i]);
	}
	return 0;
}