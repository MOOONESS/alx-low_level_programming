#include "main.h"
/**
 *print_sign -putcha
 *Return:0
 *@n:var
**/
int print_sign(int n);
{
if (n < 0)
{
_putchar(45);
_putchar('\n');
return (-1);
}
else if (n > 0)
{
_putchar(48);
_putchar('\n');
return (1);
}
else
{
_putchar(43);
_putchar('\n');
return (0);
}
}

