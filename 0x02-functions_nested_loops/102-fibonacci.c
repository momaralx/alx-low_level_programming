#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
int n1;
int n2;
int nth;
int count;
n1 = 1;
n2 = 2;
count = 0;
while (count < 50)
{
if (count == 49)
{
printf("%u", n1);
}
else
{
printf("%u, ", n1);
}
nth = n1 + n2;
n1 = n2;
n2 = nth;
count++;
}
printf("\n");
return (0);
}
