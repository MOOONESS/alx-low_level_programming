#include "main.h"
/**
 * main -putcha
 *Return:0
 **/
int main(void)
{
int i;
char ch[] = "_putchar";
for (i = 0; i <= 8; i++)
	_putchar(ch[i]);
putchar("\n");
return (0);
}
