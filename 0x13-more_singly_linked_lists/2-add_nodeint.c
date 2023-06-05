#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*add_nodeint - function that adds a new node at the beginning of a listint_t list.
*head: the first pointer of the first liste
*@n: the data of the new list
*Return: the address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)

