#include "main.h"
/**
* _strcpy - returns the length of a string
*@dest: string to get the lenght
*@src: string
*Return: lenght of the string
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
