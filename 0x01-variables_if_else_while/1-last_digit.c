#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
 *main - print whether number n is positive or negative
 *
 *Return: Always 0 (success)
 */

int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
printf("last digit of %d is ", n);
if (last_digit > 5)
{
printf("and is greater than 5\n");
}
else if (last_digit == 0)
{
printf("and is 0\n");
}
else if (last_digit < 6 && last_digit != 0)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
