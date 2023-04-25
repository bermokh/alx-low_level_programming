#include "main.h"
/**
* Description: print_alphabet_x10 - print alphabet ten time.
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int i;
int a;
for (i = 1; i <= 10; i++)
{
for (a = 97; a <= 122; a++)
{
_putchar('a');
}
_putchar('\n');
}
}
