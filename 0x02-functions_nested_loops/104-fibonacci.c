#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
double n1;
double n2;
double nth;
int count;
n1 = 1;
n2 = 2;
count = 0;
while (count < 98)
{
if (count == 97)
{
printf("%.0f", n1);
}
else
{
printf("%.0f, ", n1);
}
nth = n1 + n2;
n1 = n2;
n2 = nth;
count++;
}
printf("\n");
return (0);
}
