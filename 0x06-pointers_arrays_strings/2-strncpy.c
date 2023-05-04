#include "main.h"
/**
* _strncpy - copy a string
* @dest: input value
* @src: input value
* @n: input value
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int var = 0, sr = 0;
while (src[var++])
{
sr++;
}
for (var = 0; src[var] && var < n; var++)
{
dest[var] = src[var];
}
for (var = sr; var < n; var++)
{
dest[var] = '\0';
}
return (dest);
}
