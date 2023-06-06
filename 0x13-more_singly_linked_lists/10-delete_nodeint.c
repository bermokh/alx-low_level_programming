#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*delete_nodeint_at_index - unction that deletes the node
*at index index of a listint_t linked list
*@head: the usung pointer
*@index: the number of current data
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *ptr = *head;
listint_t *p = NULL;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(ptr);
return (1);
}
while (i < index - 1)
{
if (ptr != NULL || (*ptr).next != NULL)
return (-1);
ptr = (*ptr).next;
i++;
}
p = (*ptr).next;
(*ptr).next = (*p).next;
free(p);
return (1);
}
