#include "main.h"
/**
* times_table -  prints the 9 times table, starting with 0.
*/
void times_table(void)
{
int i, j, r;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
r = j * i;
_putchar(r);
_putchar(', ');
}
_putchar('\n');
}
}
