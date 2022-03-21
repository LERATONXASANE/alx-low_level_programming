#include <stdio.h>

/*
 *main -Entry
 *
 *Rturn: Always 0 (succes)
 */
int main(void)
{
char charType;
int intType;
double doubleType;
long int longIntType;
float floatType;

printf("Size of a char: %zu byte\n", sizeof(charType));
printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of a double: %zu byte\n", sizeof (doubleType));
printf("Size of a long int: %zu byte\n", sizeof(longIntType));
printf("Size of a float: %zu byte\n", sizeof(floatType));
return (0);
}
