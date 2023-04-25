#include "main.h"
/**
* Description: print_alphabet_x10 - print alphabet ten time.
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int i;
int alpha;
for (i = 1; i <= 10; i++)
{
for (alpha = 97; alpha <= 122; alpha++)
{
_putchar('a');
}
_putchar('\n');
}
}
