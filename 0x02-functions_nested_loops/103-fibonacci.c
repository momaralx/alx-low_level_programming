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
unsigned long int sum;
n1 = 1;
n2 = 2;
count = 0;
sum = 0;
while (n1 < 4000000)
{
if (n1 % 2 == 0)
{
sum += n1;
}
nth = n1 + n2;
n1 = n2;
n2 = nth;
count++;
}
printf("%lu\n", sum);
return (0);
}
