#include "main.h"
/**
* print_last_digit - prints the last digit of a number.
*
* @a: this is a number
*
* Return: the result a
*/
int print_last_digit(int a)
{
int var;
var = a % 10;
if (var < 0)
{
_putchar(-var + 48);
return (-var);
}
else
{
_putchar(var + 48);
return (var);
}
}
