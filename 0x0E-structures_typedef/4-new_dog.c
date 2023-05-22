#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _strlen - returns the length of a string
*@s: string to get the lenght
*Return: lenght of the string
*/
int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}

/**
* _strcpy - returns the length of a string
*@dest: string to get the lenght
*@src: string
*Return: lenght of the string
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
/**
*new_dog - a function that creates a new dog.
*@name: the first member
*@age: the second membres
*@owner: the thired memebers.
*Return: the structer made it
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int l1, l2;
l1 = _strlen(name);
l2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}
else
{
(*dog).name = malloc(sizeof(char) * (l1 + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
(*dog).owner = malloc(sizeof(char) * (l2 + 1));
if ((*dog).owner == NULL)
{
free(dog);
free((*dog).name);
return (NULL);
}
_strcpy((*dog).name, name);
_strcpy((*dog).owner, owner);
(*dog).age = age;
return (dog);
}
}
