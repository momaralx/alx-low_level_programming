#include "main.h"
#include <limits.h>
/**
 *  _abs - Absolute value
 *  @c : number to check for
 *  Return: positive number
 */
int _abs(int c)
{
if (c < 0)
{
return (-c);
}

return (c);
}

/**
 * print_last_digit - print last digit
 * @n : number to print
 * Return: last digit
 */
int print_last_digit(int n)
{
int last;
last = _abs(n) % 10;
if (n == INT_MIN)
{
_putchar('8');
return (8);
}
else
{
_putchar(last + '0');
return (last);
}
}
