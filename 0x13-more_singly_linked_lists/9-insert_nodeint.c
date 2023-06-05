#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*insert_nodeint_at_index - function that inserts a new node at a given position.
*@head: the pointre of the first node
*@idx: the index of the current data
*@n: the data 
*Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

