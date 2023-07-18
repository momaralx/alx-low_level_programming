#include "main.h"

/**
 * _isalpha - is alpha
 * @c : character to check for
 * Return: 1 if alpha, otherwise 0
*/

int _isalpha(int c)
{
if (((c >= 97) && (c <= 122)) || ((c >= 64) && (c <= 90)))
{
return (1);
}

return (0);
}
