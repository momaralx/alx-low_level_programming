#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
/**
 * main - Entry point
 * Return: 0 always
*/
int main(void)
{
int n, sign, last_digit_of_n;
char f[100];
char buffer[100];

srand(time(0));
n = rand() - RAND_MAX / 2;

sign = abs(n) / n;
sprintf(buffer, "%d", n);

last_digit_of_n = sign *atoi(&buffer[strlen(buffer) - 1]);
if (last_digit_of_n > 5)
{
strcpy(f, "and is greater than 5");
}
else if (last_digit_of_n == 0)
{
strcpy(f, "and is 0");
}
else
{
strcpy(f, "and is less than 6 and not 0");
}

printf("Last digit of %d is %d %s\n", n, last_digit_of_n, f);

return (0);
}
