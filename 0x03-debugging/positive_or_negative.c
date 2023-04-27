#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* positive_or_negative - print the result
*
* @n: integer number
* Return: Always 0 (Success)
*/
int positive_or_negative(int n)
{
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}
