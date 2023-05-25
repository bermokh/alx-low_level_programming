#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
*print_strings - function that prints strings, followed by a new line
*@separator: the string to be printed between the strings
*@n: the numbres of parametres
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list l;
char *ptr;
va_start(l, n);
for (i = 0; i < n ; i++)
{
ptr = va_arg(l, char*);
if (ptr != NULL)
{
printf("%s", ptr);
}
else
{
printf("nil");
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(l);
printf("\n");
}
