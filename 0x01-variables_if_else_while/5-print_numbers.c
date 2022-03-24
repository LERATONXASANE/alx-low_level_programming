#include <stdio.h>

/**
 *main - prints all single digit numbers of base 10 starting from 0
 *
 *return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
