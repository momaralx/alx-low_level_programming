#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main() {
    const char* quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
    fflush(stdout);
    write(STDOUT_FILENO, quote, strlen(quote));

    return 0;
}
