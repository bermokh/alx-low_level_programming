#include "main.h"
/**
*binary_to_uint - function that converts a binary number to an unsigned int.
*@b:  is pointing to a string of 0 and 1 chars
*Return: the converted number,
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int d = 0;
if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
d = 2 * d + (b[i] - '0');
}
return (d);
}
