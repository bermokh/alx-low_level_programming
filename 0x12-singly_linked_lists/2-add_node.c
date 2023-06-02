#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*add_node - function that adds a new node at the beginning of a list_t list.
*@head: the pointer of the first node
*@str: a string to be duplicated
*Return:  the address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *ptr;
while (str[len])
{
len++;
}
ptr = malloc(sizeof(list_t));
if (!ptr)
{
return (NULL);
}
else
{
(*ptr).str = strdup(str);
(*ptr).len = len;
(*ptr).next = (*head);
(*head) = ptr;
return (*head);
}
}
