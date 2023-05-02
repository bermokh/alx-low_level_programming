#include <stdio.h>
/**
* swap_int - swapes the value of tow interges
* @a: the first integer
* @b: the second integre
*
* return: nothing
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

