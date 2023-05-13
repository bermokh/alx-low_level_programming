#include "main.h"
#include <stdio.h>
/**
*main - the entry point
*@argc: the integer number
*@argv: teh array using
*Return: always 0 it s correct
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
