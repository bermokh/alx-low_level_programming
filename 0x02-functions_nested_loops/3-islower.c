#include "main.h"
/**
* Description: _islower - show 1 if a caracter is lower.
*
* @c: The caracter in ASCII code.
*
* Return: Always 0 (Success)
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
