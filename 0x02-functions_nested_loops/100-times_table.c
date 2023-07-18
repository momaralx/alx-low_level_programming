#include "main.h"


/**
* deal_with_val - deals with spacing and value printing
* @val : value to deal with
* Return: nothing
*
*/
void deal_with_val(int val)
{
if (val >= 100)
{
_putchar((int)(val / 100) + '0');
_putchar((int)((int)(val % 100) / 10) + '0');
_putchar((int)((int)(val % 100) % 10) + '0');
}
else if (val >= 10)
{
_putchar(val / 10 + '0');
_putchar(val % 10 + '0');
}
else
{
_putchar(val % 10 + '0');
}
}


/**
* print_times_table - 0x0...nxn
* @n : print till n
* Return: nothing
*
*/

void print_times_table(int n)
{
int m;
int d;
if (n > 15 || n < 0)
{
return;
}
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
deal_with_val(val);
if (d == n)
{
_putchar('\n');
}
}
}
}
