#include "dog.h"
#include<stdlib.h>
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
printf("Name : %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("age : %f\n", d->age);
printf("Owner : %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
