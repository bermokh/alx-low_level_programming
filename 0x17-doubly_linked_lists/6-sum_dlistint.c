#include "lists.h"
/**
*sum_dlistint - unction that returns the sum of all the data
*@head:  the adress
*Return: the sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
