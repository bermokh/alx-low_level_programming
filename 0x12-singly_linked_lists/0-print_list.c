#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
*print_list - function that prints all the elements of a list_t list.
*@h: the pointer to a node
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
int count = 0;
while (h != NULL)
{
if ((*h).str != NULL)
{
printf("[%u] %s\n", (*h).len, (*h).str);
}
else
{
printf("[0] (nil)\n");
}
h = (*h).next;
count++;
}
return (count);
}
