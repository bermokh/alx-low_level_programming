#include "main.h"
/**
*_strlen_recursion - function that returns the length of a string
*@s: the using string
*Return: the lenght of string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
s++;
return (_strlen_recursion(s) + 1);
}
}
