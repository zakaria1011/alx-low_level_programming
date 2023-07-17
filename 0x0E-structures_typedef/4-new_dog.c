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
newDog = (dog_t *) malloc(sizeof(dog_t));
if (newDog == NULL)
{
free(newDog);
return (NULL);
}
newDog->name = (char *) malloc(strlen(name) + 1);
if (newDog->name == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
newDog->owner = (char *) malloc(strlen(owner) + 1);
if (newDog->owner == NULL)
{
free(newDog->owner);
free(newDog);
return (NULL);
}
strcpy(newDog->name, name);
strcpy(newDog->owner, owner);
newDog->age = age;
return (newDog);
}
