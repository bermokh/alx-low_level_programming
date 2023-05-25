#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_all - function that prints anything.
*@format: the string using to show the parametres
*/
void print_all(const char * const format, ...)
{
int i = 0;
va_list l;
char *ptr, *s = "";
va_start(l, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", s, va_arg(l, int));
break;
case 'i':
printf("%s%d", s, va_arg(l, int));
break;
case 'f':
printf("%s%f", s, va_arg(l, double));
break;
case 's':
ptr = va_arg(l, char*);
if (!ptr)
ptr = "(nil)";
printf("%s%s", s, ptr);
break;
default:
i++;
continue;
}
s = ", ";
i++;
}
}
printf("\n");
va_end(l);
}

