#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
*main - the entry point
*@argc: the first argument
*@argv: the array of size argc
*Return: always 0 is success
*/
int main(int argc, char **argv)
{
int (*op_func)(int, int), a, b;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
op_func = get_op_func(argv[2]);
if (!op_func)
{
printf("Error\n");
exit(99);
}
if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
{
printf("Error\n");
exit(100);
}
printf("%d\n", op_func(a, b));
return (0);
}
