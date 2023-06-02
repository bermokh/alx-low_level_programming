#include <stdlib.h>
#include "lists.h"
/**
*free_list -  function that frees a list_t list.
*@head: the pointre of the liste to be free
*/
void free_list(list_t *head)
{
list_t *ptr;
while (head != NULL)
{
ptr = (*ptr).next;
free((*head).str);
free(head);
head = ptr;
}
}
