#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
*print_name - function thet print a nam
*@name: the argement we need to print
*@f: the pointer to a function
*Return: nothing to give us
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
else
{
f(name);
}
}
