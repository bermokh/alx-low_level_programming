#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - function that creates an array of chars
*@size: unusined integer
*@c: the caracter of array
*Return: teh result attent
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;
if (size == 0)
{
return (NULL);
}
else
{
p = malloc(size * sizeof(char));
if (p == 0)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
}
}
