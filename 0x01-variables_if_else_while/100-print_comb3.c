#include <stdio.h>

/**
 * main - prints a list of double didgits
 *
 * Description: digits should not be repeated twice
 * Return: Always(0) Success
*/

int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = 49; j < 58; j++)
		{
		  if (i < j && i != j)
		  {
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		    }
		}
	}
	putchar('\n');

	return (0);
}

