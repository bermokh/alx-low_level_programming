#include "main.h"
/**
*_memcpy - function that copies memory area.
*@dest: first pointer
*@src: second pointer
*@n: number of bytes
*Return: dest as a result
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
dest[i] = src[i];
n--;
}
return (dest);
}
