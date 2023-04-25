#include "main.h"
/**
* Description: print_alphabet - prints the alphabet, in lowercase
*
* main - Entry point
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
int alpha;
for (alpha = 97; alpha <= 122; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
