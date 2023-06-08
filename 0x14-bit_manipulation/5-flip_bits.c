#include "main.h"
/**
*flip_bits - function that returns the number of bits you
*would need to flip to get from one number to another.
*@n: an integer numbre
*@m: an anteger numbre
*Return: that returns the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, j = 0;
unsigned long int result;
unsigned long int new = n ^ m;
for (i = 63; i >= 0; i--)
{
result = new >> i;
if (result & 1)
j++;
}
return (j);
}
