#include <unistd.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Return: 1 always
 */

int main(void)
{
char *q = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fflush(stdout);
write(STDOUT_FILENO, q, strlen(q));
return (1);
}
