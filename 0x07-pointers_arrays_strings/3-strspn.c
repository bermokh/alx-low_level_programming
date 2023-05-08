#include "main.h"
/**
*_strspn - function that gets the length of a prefix substring.
*@s: the first string;
*@accept: the second string
*Return: the number of byts
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, v = 0, cont;
for (i = 0; s[i] != '\0'; i++)
{
cont = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
v = v + 1;
cont = 1;
}
}
if (cont == 0)
{
return (v);
}
}
return (v);
}
