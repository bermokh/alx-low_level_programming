#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*add_nodeint_end - Write a function that adds a new node at the end of a listint_t list.
*@head: the pointre of the new node
*@n: the data of the new node
*Return: the address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
