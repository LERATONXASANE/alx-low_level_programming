#include "main.h"
#include <stdlib.h>

/**
 * _abs - prints te absolute value
 * 
 * @n: input parameter
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

