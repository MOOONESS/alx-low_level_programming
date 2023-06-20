#include "main.h"
#include <ctype.h>
/**
 *_islower -putcha
 *Return:0
 *@n:var
**/
int print_sign(int n);
{
if (n < 0)
{
return (-1);
_putchar('-');
_putchar('\n');
}
else if (n > 0)
{
return (1);
_putchar('+');
_putchar('\n');
}
else
{
return (0);
_putchar('0');
_putchar('\n');
}
}

