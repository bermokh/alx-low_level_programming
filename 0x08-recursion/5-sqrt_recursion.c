#include "main.h"
#include <stdio.h>
/**
*_sqrt_recursion - function that returns the natural square root of a number.
*@n: the integer number
*Return: the squar of a number
*/
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
*_sqrt - calculat natural sqrt root
*@n: the integer number
*@i: iterate number
*Return: the result looking
*/
int _sqrt(int n, int i)
{
int val = i * i;
if (val > n)
{
return (-1);
}
else if (val == n)
{
return (i);
}
return (_sqrt(n, i + 1));
}
