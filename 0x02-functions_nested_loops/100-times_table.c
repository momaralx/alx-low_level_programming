#include "main.h"

/**
 * print_times_table - 0x0...nxn
 * @n : print till n
 * Return: nothing
 *
 */

void print_times_table(int n)
{
if (n > 15 || n < 0)
{
return;
}
int m;
int d;
for (m = 0; m <= n; m++)
{
for (d = 0; d <= n; d++)
{
int val;
val = m * d;
if (d != 0)
{
_putchar(',');
if (val < 10)
{
_putchar(' ');
}
if (val < 100)
{
_putchar(' ');
}
_putchar(' ');
}
if (val >= 10)
{
_putchar(val / 10 + '0');
_putchar(val % 10 + '0');
}
else if (val >= 100)
{
_putchar(val / 100 + '0');
_putchar((val % 100) / 10 + '0');
_putchar((val % 100) % 10 + '0');
}
else
{
_putchar(val % 10 + '0');
}
if (d == n)
{
_putchar('\n');
}
}
}
}
