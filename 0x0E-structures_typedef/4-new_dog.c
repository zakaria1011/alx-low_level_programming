#include "dog.h"
#include<stdio.h>
#include<stdlib.h>``
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
dogg->name = name;
dogg->age = age;
dogg->owner = owner;
return (dogg);
}
