#include "main.h"
#include <stdio.h>
/**
*_strchr - function that locates a character in a string.
*@s: the string;
*@c: the caracter loking for,
*Return: the word with c
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] <= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
