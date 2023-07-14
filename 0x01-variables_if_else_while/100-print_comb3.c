#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
*/
int main(void)
{
int i, j;
for (i = 48; i <= 57; i++)
{
for (j = i + 1; j <= 57; j++)
{
putchar(i);
putchar(j);

if (i != '8' || j != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
