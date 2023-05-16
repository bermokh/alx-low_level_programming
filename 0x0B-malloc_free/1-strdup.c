#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - function that returns a pointer to a newly allocated space in memory
*@str: the string to show
*Return: the string str
*/
char *_strdup(char *str)
{
int i, lent = 0;
char *p;
if (str == NULL)
return (NULL);

for (; str[lent] != '\0'; lent++)

p = malloc(lent * sizeof(*str) + 1);
if (p == 0)
{
return (NULL);
}
else

for (i = 0; i < lent; i++)

p[i] = str[i];

return (p);
}
