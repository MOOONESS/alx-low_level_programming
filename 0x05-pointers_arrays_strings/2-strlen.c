#include "main.h"
/**
 *_strlen - len
 *@s: str
 *Return: la long
 */
int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
	l++;
	s++;
}
return (l);
}
