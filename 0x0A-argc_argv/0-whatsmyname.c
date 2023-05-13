#include "main.h"
#include <stdio.h>
/**
*main - the entry point
*
*@argc: the argument counter
*
*@argv: the array form string
*Return: the 0 if is correct
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
