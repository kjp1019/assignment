#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float num1;
	printf("Please enter kilometers:");
	scanf("%f", &num1);
	
	printf("%.1f km is equal to %.1f miles.\n", num1, num1 * 0.621371);
	return 0;
}