#include "main.h"

/**
 * void - print_alphabet - prints all aphabets in lowercase
 *
 * Description: They are sorted by default
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
