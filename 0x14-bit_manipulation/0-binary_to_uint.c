#include "main.h"
/**
*binary_to_uint - function that converts a binary number to an unsigned int
*@b: s pointing to a string of 0 and 1 chars
*Return:  the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
int count = 0;
unsigned int val = 0;
if (b == NULL)
return (0);
for (count = 0; b[count]; count++)
{
if (b[count] < '0' || b[count] > '1')
return (0);
val = 2 * val + (b[count] - '0');
}
return (val);
}
