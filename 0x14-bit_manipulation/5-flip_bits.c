#include "main.h"
/**
*flip_bits - function that returns the number of bits
*you would need to flip to get from one number to another.
*@n: first number
*@m: second nmbr
*Return: nmbr of bit
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int now;
unsigned long int ex = n ^ m;
for (i = 63; i >= 0; i--)
{
now = ex >> i;
if (now & 1)
count++;
}
return (count);
}
