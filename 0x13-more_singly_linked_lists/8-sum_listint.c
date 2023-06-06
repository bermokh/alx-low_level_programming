#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*sum_listint -  function that returns the sum
*of all the data (n) of a listint_t linked list.
*@head: pointres of the first data
*Return:  the sum of all the data
*/
int sum_listint(listint_t *head)
{
unsigned int sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum += (*head).n;
head = (*head).next;
}
return (sum);
}
