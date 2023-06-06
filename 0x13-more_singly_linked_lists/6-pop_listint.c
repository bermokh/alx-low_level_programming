#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
*pop_listint - function that deletes the head node of a listint_t
*linked list, and returns the head node’s data (n)
*@head: the pointre of the data
*Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
listint_t *ptr;
int data;
if (head == NULL || *head == NULL)
{
return (0);
}
else
{
data = (*head)->n;
ptr = (*head)->next;
free(*head);
*head = ptr;
return (data);
}
}
