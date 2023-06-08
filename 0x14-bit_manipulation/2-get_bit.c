#include "main.h"
/**
*get_bit - function that returns the value of a bit at a given index.
*@n: the integer numbre
*@index: the index of print numbre
*Return: the value of a bit at a given index
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit;
if (index > 63)
return (-1);
bit = (n >> index) & 1;
return (bit);
}
