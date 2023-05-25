#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"
/**
*print_numbers - function that prints numbers, followed by a new line.
*@separator: the string to be printed between numbers
*@n: the numbers of string
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list l;
if (separator == NULL)
{
va_start(l, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(l, int));
va_end(l);
}
printf("\n");
}
else
{
va_start(l, n);
for (i = 0; i < n; i++)
{
printf("%d%s", va_arg(l, int), separator);
va_end(l);
}
printf("\n");
}
}
