#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: input value
* @src: input value
*
* Return: void
*/

char *_strcat(char *dest, char *src)
{
int var = 0, x;
while (dest[var])
{
var++;
}
for (x = 0; src[x] != 0; x++)
{
dest[var] = src[x];
var++;
}
dest[var] = '\0';
return (dest);
}
