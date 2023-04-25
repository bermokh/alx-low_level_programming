#include "main.h"
/**
* _isalpha - checks for alphabetic character.
*
* @c: The caracter in ASCII code.
*
* Return: Always 0 (Success)
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 99))
{
return (1);
}
else
{
return (0);
}
}

