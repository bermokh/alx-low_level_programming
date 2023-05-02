#include <stdio.h>
/**
* _strlen - a function that returns the length of a string.
*
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

