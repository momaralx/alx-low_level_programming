#include "main.h"
/**
 * jack_bauer - print every minute of the day of Jack Bauer
 * Return: nothing
 */

void jack_bauer(void)
{
int min;
int hr;
for (hr = 0; hr <= 23; hr++)
{
for (min = 0; min <= 59; min++)
{
_putchar((int)hr / 10 + '0');
_putchar((int)hr % 10 + '0');
_putchar(':');
_putchar((int)min / 10 + '0');
_putchar((int)hr % 10 + '0');
_putchar('\n');
}
}
}
