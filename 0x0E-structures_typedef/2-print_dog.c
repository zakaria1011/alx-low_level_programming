#include "dog.h"
#include<stdio.h>
/**
 * print_dog - print name, owner, age of a dog
 * @d: dogg to print info of
 */
void print_dog(struct dog *d)
{
printf("Name: %s\n", d->name);
printf("age: %lf\n", d->age);
printf("Owner: %s\n", d->owner);
}
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}