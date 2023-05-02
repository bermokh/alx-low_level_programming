#include <stdio.h>
/**
* _strlen - Return the length of string.
*
* @s: String
* return: return length
*/
int _strlen(char *s)
{
int length = 0;
while (*s++)
length++;
return (length);
}
