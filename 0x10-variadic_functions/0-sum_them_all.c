#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
*sum_them_all - function that returns the sum of all its parameters
*@n:the numbers of parametres
*@...: the inconu liste of parametre
*Return: the sum of all param
*/
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list l;
if (n == 0)
{
return (0);
}
else
{
va_start(l, n);
for (i = 0; i < n; i++)
{
sum += va_arg(l, int);
va_end(l);
}
return (sum);
}
}
