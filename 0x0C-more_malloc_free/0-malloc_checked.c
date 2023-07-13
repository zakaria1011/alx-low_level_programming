#include "main.h"
#include<stdlib.h>
/**
 * malloc_checked - allocat memory
 * @b: parametre
 * Return: a pointer void
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
