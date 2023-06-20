#include "main.h"
#include <ctype.h>
/**
 *_islower -putcha
 *Return:0
 *@c:var
 **/
int _islower(int c)
{
if (islower(c))
{
return (0);
_putchar('\n');
}
else
{
return (1);
_putchar('\n');
}
}
