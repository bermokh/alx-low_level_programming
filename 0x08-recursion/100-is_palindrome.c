#include "main.h"
/**
*_strlen_recursion - return the lenght of string
*@s: the string study
*Return: the lenght of string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}

/**
*test - compar the caracter of string
*@s: the string using
*@i: smal char
*@j: biggest char
*Return: the result nedding
*/
int test(char *s, int i, int j)
{
if (*(s + i) == *(s + j))
{
if (i == j || i == j + 1)
{
return (1);
}
return (0 + test(s, i + 1, j - 1));
}
return (0);
}

/**
*is_palindrome - function that returns 1 if a string is a palindrome
*@s: the string using
*Return: the 0 or 1
*/
int is_palindrome(char *s)
{
if (*s == '\0')
{
return (1);
}
else
{
return (test(s, 0, _strlen_recursion(s) - 1));
}
}

