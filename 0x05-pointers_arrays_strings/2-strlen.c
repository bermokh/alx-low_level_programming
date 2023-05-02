#include <stdio.h>
/**
* _strlen - returns the length of a string
* @s: the string using
* return: the length
*/
int _strlen(char *s)
{
int length = 0;
while (*s++)
length++;
return (length);
}

