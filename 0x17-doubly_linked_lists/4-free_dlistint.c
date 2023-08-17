#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: the adress of node
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
