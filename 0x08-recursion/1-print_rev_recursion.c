#include "main.h"
/**
*_print_rev_recursion -  function that prints a string in reverse.
*@s: the string to read in revers
*
*Return: we dont have nothing
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
}
