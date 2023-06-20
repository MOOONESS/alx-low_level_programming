#include "main.h"
#include <ctype.h>
/**
 *print_sign -putcha
 *Return:0
 *@n:var
**/
int print_sign(int n);
{
if (n < 0)
{
return (-1);
_putchar(45);
_putchar('\n');
}
else if (n > 0)
{
return (1);
_putchar(48);
_putchar('\n');
}
else
{
return (0);
_putchar(43);
_putchar('\n');
}
}

