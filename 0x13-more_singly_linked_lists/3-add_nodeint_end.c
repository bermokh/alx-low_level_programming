#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*add_nodeint_end - Write a function that adds
*a new node at the end of a listint_t list.
*@head: the pointre of the new node
*@n: the data of the new node
*Return: the address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *p;
listint_t *ptr = *head;
p = malloc(sizeof(listint_t));
if (!p)
return (NULL);
else
(*p).n = n;
(*p).next = NULL;
if (*head == NULL)
{
*head = p;
return (p);
}
while ((*ptr).next)
ptr = (*ptr).next;
(*ptr).next = p;
return (p);
}
