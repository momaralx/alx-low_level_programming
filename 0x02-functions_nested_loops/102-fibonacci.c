#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
long int n1;
long int n2;
long int nth;
int count;
n1 = 1;
n2 = 2;
count = 0;
while (count < 50)
{
if (count == 49)
{
printf("%lu", n1);
}
else
{
printf("%lu, ", n1);
}
nth = n1 + n2;
n1 = n2;
n2 = nth;
count++;
}
printf("\n");
return (0);
}
