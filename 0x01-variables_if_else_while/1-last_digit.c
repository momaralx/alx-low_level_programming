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
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    int sign = abs(n) / n;
    char buffer[100];
    sprintf(buffer, "%d", n);
    
    char f[100] = {0};
    int last_digit_of_n = sign * atoi(&buffer[strlen(buffer)- 1]);
    if ( last_digit_of_n > 5 )
    {
      strcpy(f, "and is greater than 5");
    }
    else if ( last_digit_of_n == 0 ){
      strcpy(f, "and is 0");
    }else{
      strcpy(f, "and is less than 6 and not 0");
    }

    printf("Last digit of %d is %d %s\n", n, last_digit_of_n, f );

    return (0);
}
