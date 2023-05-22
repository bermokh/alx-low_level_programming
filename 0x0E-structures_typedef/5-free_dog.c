#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_dog - function that frees dogs
*@d: the variable of taype
*/
void free_dog(dog_t *d)
{
if (d)
{
free((*d).name);
free((*d).owner);
free(d);
}
}
