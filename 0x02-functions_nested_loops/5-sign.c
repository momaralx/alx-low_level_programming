#include "main.h"


/**
 * print_sign - print sign
 * @n : number to check for
 * Return: 0 if n=0, + if n>0, otherwise -
 *
*/
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return 0;
}
else if (n > 0)
{
_putchar('+');
return 1;
}
_putchar('-');
return -1;
}
