#include "dog.h"
#include<stdio.h>
/**
 * print_dog - print name, owner, age of a dog
 * @d: dogg to print info of
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
}
printf("Name: %s\n", d->name);
printf("age: %lf\n", d->age);
printf("Owner: %s\n", d->owner);
}
