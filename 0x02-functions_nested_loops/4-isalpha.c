#include "main.h"
#include <ctype.h>
/**
 *_isalpha -putcha
 *Return:0
 *@c:var
 **/
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
_putchar('\n');
}
else
{
return (0);
_putchar('\n');
}
}
