#include "dog.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * print_dog - print name, owner, age of a dog
 * @d: dogg to print info of
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "nil";
if (d->owner == NULL)
d->owner = "nail";
printf("Name: %s\n", d->name);
printf("age: %.1f\n", d->age);
printf("Owner: %s\n", d->owner);
}
