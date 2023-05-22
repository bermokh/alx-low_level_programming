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
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
