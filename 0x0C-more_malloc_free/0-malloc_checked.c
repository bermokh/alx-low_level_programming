#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - function that allocates memory
*@b: the integer using to allocat
*Return: the pointer alocated
*/
void *malloc_checked(unsigned int b)
{
void *point;
point = malloc(b);
if (point == NULL)
{
exit(98);
}
else
{
return (point);
}
}
