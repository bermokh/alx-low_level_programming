#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
*free_listint2 - function that frees a listint_t list
*@head: pointre of the node
*/
void free_listint2(listint_t **head)
{
listint_t *ptr;
if (head == NULL)
return;
while (*head != NULL)
{
ptr = (*head)->next;
free(*head);
*head = ptr;
}
*head = NULL;
}
