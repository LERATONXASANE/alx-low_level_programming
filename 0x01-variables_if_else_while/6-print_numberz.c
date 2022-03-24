#include <stdio.h>

/**
 *main - prints all single digit numbers of base 10 starting with 0
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar ('\n');

	return (0);
}
