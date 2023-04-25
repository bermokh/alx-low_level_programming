#include "main.h"
/**
* _abs - computes the absolute value of an integer.
*
* @a: integer number
*
* Return: always 0 (succsss)
*/
int _abs(int a)
{
if (a >= 0)
{
_putchar(a);
}
else
{
_putchar(-1 * a);
}
}
