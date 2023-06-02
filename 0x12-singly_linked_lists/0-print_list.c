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
count++;
if ((*h).str == NULL)
{
printf("[0] (nil)");
}
else
{
printf("%s", (*h).str);
}
printf("[%u]\n", (*h).len);
h = (*h).next;
}
return (count);
}
