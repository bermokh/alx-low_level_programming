#include "main.h"
/**
*_pow_recursion - function that returns the value of x raised to the power of y
*@x: the integer number
*@y: the power of x number
*Return: the power of number
*/
int _pow_recursion(int x, int y)
{
if (y >= 0)
{
if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
else
{
return (-1);
}
}
