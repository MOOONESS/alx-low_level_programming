#include "main.h"
#include <stdio.h>
/**
 *_strlen - len
 *Return : la long
 *@s: str
 */
int _strlen(char *s)
{
int l = 0;
while (s != '\n')
{
	l++;
	s++;
}
return (l);
}
