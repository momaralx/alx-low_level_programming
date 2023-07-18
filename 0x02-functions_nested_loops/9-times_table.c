#include "main.h"

/**
 * times_table - 0x0...9x9
 * Return: nothing
 *
 */

void times_table(void)
{
int m;
int d;
for (m = 0; m <= 9; m++)
{
for (d = 0; d <= 9; d++)
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
_putchar(' ');
}
if (val >= 10)
{
_putchar(val / 10 + '0');
}
_putchar(val % 10 + '0');

if (d == 9)
{
_putchar('\n');
}
}
}
}
