#include "main.h"
#include <stdio.h>
/**
*main - the entry point;
*@argc: the integer number of caracter
*@argv: the array of argc caracter
*Return: always 0 it s correct
*/
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
