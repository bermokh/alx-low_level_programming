#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strlen - find a lenght of sting
*@s: string ussing
*Return: the lenght of string
*/
int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
/**
**str_concat - function that concatenates two strings
*@s1: the first string
*@s2: the second string
*Return: the two strings concantes
*/
char *str_concat(char *s1, char *s2)
{
int size1, size2, i;
char *p;
if (s2 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
size1 = _strlen(s1);
size2 = _strlen(s2);
p = malloc((size1 + size2) *sizeof(char) + 1);
if (p == 0)
return (0);
for (i = 0; i <= size1 + size2; i++)
{
if (i < size1)
p[i] = s1[i];
else
p[i] = s2[i - size1];
}
p[i] = '\0';
return (p);
}
