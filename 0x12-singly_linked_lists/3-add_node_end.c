#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
*add_node_end -  function that adds a new node at the end of a list_t list.
*@head: the pointer of the last nod;
*@str: a string to duplacat
*Return: the pointre of the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *ptr;
list_t *p  = *head;
unsigned int len = 0;
while (str[len])
{
len++;
}
ptr = malloc(sizeof(list_t));
if (!ptr)
{
return (NULL);
}
(*ptr).str = strdup(str);
(*ptr).len = len;
(*ptr).next = NULL;
if (*head == NULL)
{
*head = ptr;
return (ptr);
}
while ((*p).next)
p = (*p).next;
(*p).next = ptr;
return (ptr);
}

