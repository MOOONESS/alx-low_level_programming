#include "main.h"
/**
 * _puts -hfc
 * @str: uibzefd
 */
void _puts(char *str)
{
while (*str != '\0')
{
	_putchar(*str++);
}
_putchar('\n');
}
