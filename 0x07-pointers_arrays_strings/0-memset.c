#include "main.h"
/**
*_memset - function that fills memory with a constant byte.
*@s: the pointre where stocked the n byte of b,

*@b: the variable char, 
*@n: number of bytes
*return: (s) the value,
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
