#include "main.h"

/**
 * puts2 - print every other char of a string
 * @str: string
 *
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
