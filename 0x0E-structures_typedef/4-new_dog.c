#include "dog.h"
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
dog_t *newDog;
newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}
newDog->name = malloc(strlen(name));
if (newDog->name == NULL)
{
return (NULL);
}
strcpy(newDog->name, name);
newDog->owner = malloc(strlen(owner));
if (newDog->owner == NULL)
{
return (NULL);
}
strcpy(newDog->owner, owner);
newDog->age = age;
return (newDog);
}
