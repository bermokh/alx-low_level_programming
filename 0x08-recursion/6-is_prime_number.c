#include "main.h"
/**
*is_prime_number - chek if the number is prime
*
*@n: the integer number
*Return: the result 1 if it's prime
*/
int is_prime_number(int n)
{
return (prime_nbr(n, 1));
}
/**
*prime_nbr - chek if the number is prime
*@n: the number to check
*@i: the integer number
*Return: 1 for prime 0 for no
*/
int prime_nbr(int n, int i)
{
if (n <= 1)
{
return (0);
}
if (n % i == 0 && i > 1)
{
return (0);
}
if ((n / i) < i)
{
return (1);
}
return (prime_nbr(n, i + 1));
}
