#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * init_dog - function who initiate variabletype dog
 * @d: pointer to
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
if (d == 0)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
