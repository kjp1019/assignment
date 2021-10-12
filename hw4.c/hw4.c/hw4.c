#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void binary_num(int num)
{
	if (num > 0)
	{
		binary_num(num / 2);
		printf("%d", num % 2);
	}
}

int main(void)
{
	int num;
	printf("Please enter a number:");
	scanf("%d", &num);

	if (num > 0)
		binary_num(num);
	else
		printf("0");
	
	return 0;
}