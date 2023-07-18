#include <stdio.h>
#include <stdint.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
uint64_t n1;
uint64_t n2;
uint64_t nth;
int count;
n1 = 1;
n2 = 2;
count = 0;
while (count < 98)
{
if (count == 97)
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
