#include "main.h"

 void jack_bauer(void)
{
  int min;
  int hr;
  for (hr = 0; hr <= 23; hr++)
  {
    for (min = 0; min <= 59; min++)
    {
      _putchar((int)hr/10);
      _putchar((int)hr%10);
      _putchar(':');
      _putchar((int)min/10);
      _putchar((int)hr%10);
      _putchar('\n');
    }
  }
}
