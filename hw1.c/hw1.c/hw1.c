#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("2개의 정수 입력:");
	scanf("%d %d", &num1, &num2);
	int num_AND = num1 % num2;
	int num_OR = num1 | num2;
	int num_XOR = num1 ^ num2;
	printf("%d & %d = %d \n", num1, num2, num_AND);
	printf("%d | %d = %d \n", num1, num2, num_OR);
	printf("%d ^ %d = %d \n", num1, num2, num_XOR);
	return 0;
}