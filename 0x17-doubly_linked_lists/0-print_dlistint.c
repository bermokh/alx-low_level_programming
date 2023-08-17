#include "lists.h"
/**
 * print_dlistint - print doubly linked list
 * @h: adresse of head
 * Return: size of liste
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
