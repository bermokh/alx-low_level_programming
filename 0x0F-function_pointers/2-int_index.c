#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
*int_index -  function that searches for an integer.
*@array: the array using in main function
*@size: the size of array 
*@cmp: the pointer function
*Return: the index of integer number
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size <= 0)
{
return(-1);
}
else
{
while (cmp(array[i]) == 0 && i < size)
{
i++;
}
if (i == size)
{
return(-1);
}
else
{
return(i);
}
}
}
