#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: always (0) success.
 *
 */
int main(void)
{
int i, tot = 0;
while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
tot += i;
}
i++;
}
printf("%d\n", tot);
return (0);
}
