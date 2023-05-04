#include "main.h"
/**
* _strncat - concatenate two strings
* using at most n bytes from src
* @dest: input value
* @src: input value
* @n: input value
*
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int dex = 0, var = 0;
while (dest[dex++])
{
var++;
}
for (dex = 0; src[dex] && dex < n; dex++)
{
dest[var++] = src[dex];
}
return (dest);
}
