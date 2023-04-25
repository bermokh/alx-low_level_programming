#include "main.h"
/**
* print_sign - prints the sign of a number.
*
* @n: is a number.
*
* Return: 1 is greater than zero
*/
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
return (-1);
_putchar('-');
}
_putchar('\n');
}
