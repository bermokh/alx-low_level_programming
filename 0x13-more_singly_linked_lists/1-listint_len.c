#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*listint_len - function that returns the number
*of elements in a linked listint_t list.
*@h: the pointer of the first nod
*Return:  the number of elements
*/
size_t listint_len(const listint_t *h)
{
int i = 0;
while (h != NULL)
{
i++;
h = (*h).next;
}
return (i);
}
