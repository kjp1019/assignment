#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[100];
	int i;
	printf("Input> ");
	gets(str);
	for (i = 0; i < 100; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	printf("Output> %s", str);

	return 0;
}