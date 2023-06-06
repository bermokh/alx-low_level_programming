#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*insert_nodeint_at_index - function
*that inserts a new node at a given position.
*@head: the pointre of the first node
*@idx: the index of the current data
*@n: the data
*Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *ptr;
listint_t *vid = *head;
ptr = malloc(sizeof(listint_t));
if (ptr == NULL || head == NULL)
return (NULL);
(*ptr).n = n;
(*ptr).next = NULL;
if (idx == 0)
{
(*ptr).next = *head;
*head = ptr;
return (ptr);
}
for (i = 0; vid && i < idx; i++)
{
if (i == idx - 1)
{
(*ptr).next = (*vid).next;
(*vid).next = ptr;
return (ptr);
}
else
vid = (*vid).next;
}
return (NULL);
}
