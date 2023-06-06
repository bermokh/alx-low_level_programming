#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*get_nodeint_at_index - function that returns
*the nth node of a listint_t linked list.
*@head: the pointer of the data
*@index: the number of data
*Return: the nth nod
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *ptr = head;
while (ptr != NULL && i < index)
{
ptr = (*ptr).next;
i++;
}
if (ptr != NULL)
return (ptr);
else
return (NULL);
}
