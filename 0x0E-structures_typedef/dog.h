#ifndef DOG_H
#define DOG_H

/**
*struct dog - a data type
*@name: the first structer members
*@age: the second structer members of type lf
*@owner: the last structer members
*/
struct dog
{
char *name;
float age;
char *owner;
};
/**
*dog_t - a new name for the type struct dog.
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif
