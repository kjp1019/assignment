#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

float standard_deviation(float arr[])
{
	float sum = 0, m, variance = 0;
	int i;
	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	m = sum / 5;
	for (i = 0; i < 5; i++)
	{
		variance += pow(arr[i] - m, 2);
	}
	return sqrt(variance / 5);
}

int main(void)
{
	float arr[5];
	int i;

	printf("Enter 5 real numbers:");
	for (i = 0; i < 5; i++)
	{
		scanf("%f", &arr[i]);
	}
	printf("\nStandard Deviation = %.3f", standard_deviation(arr));
	
	return 0;
}