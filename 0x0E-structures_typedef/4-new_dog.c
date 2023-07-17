#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
#include "string.h"
/**
 * new_dog - define new dog
 * @name: name dogg
 * @age: age
 * @owner: owner
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dogg;
dogg = malloc(sizeof(dog_t));
if (dogg == NULL)
{
return (NULL);
}
dogg->name = malloc(strlen(name) + 1);
if (dogg->name == NULL)
{
free(dogg->name);
free(dogg);
return (NULL);
}
strcpy(dogg->name, name);
dogg->owner = malloc(strlen(owner) + 1);
if (dogg->owner == NULL)
{
free(dogg->owner);
free(dogg);
return (NULL);
}
strcpy(dogg->owner, owner);
dogg->age = age;
return (dogg);
}
