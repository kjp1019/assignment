#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct employee
{
	char name[20]; // 이름
	char country[20]; // 주민번호
	int population; // 급여
};

int main(void)
{
	struct employee arr[3];
	int i;
	printf("Input three cities:\n");
	for (i = 0; i < 3; i++)
	{
		printf("Name> ");
		scanf_s("%s", arr[i].name, sizeof(arr[i].name));
		printf("Country> ");
		scanf_s("%s", arr[i].country, sizeof(arr[i].country));
		printf("Population> ");
		scanf_s("%d", &arr[i].population);
	}
	printf("Printing the three cities:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people\n", i+1, arr[i].name, arr[i].country, arr[i].population);
	}
	return 0;
}