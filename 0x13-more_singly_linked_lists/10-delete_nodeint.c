#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*elete_nodeint_at_index - unction that deletes the node at index index of a listint_t linked list
*@head: the usung pointer
*@index: the number of current data
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
