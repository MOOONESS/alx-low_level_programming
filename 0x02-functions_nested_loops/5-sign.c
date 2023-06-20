#include "main.h"
/**
 *print_sign - putcha
 *Return:0
 *@n:var
**/
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar(48);
return (0);
}
}

