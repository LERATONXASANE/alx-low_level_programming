#include "main.h"

/**
 * print_alphabet - prints all aphabets in lowercase
 *
 * Description: They are sorted by default
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	char c = 97;

	for (c = 97; c < 123; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
