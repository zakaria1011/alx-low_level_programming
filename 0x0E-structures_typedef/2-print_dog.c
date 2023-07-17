#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
printf("Name: %s", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %f", d->age);
printf("Owner: %s", (d->owner != NULL) ? d->owner : "(nil)");
}
