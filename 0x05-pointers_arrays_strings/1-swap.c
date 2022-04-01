#include "main.h"

/**
* swap_int - swap the values of two integers
* @a: pointer 1
* @b: pointer 2
*
* Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}

