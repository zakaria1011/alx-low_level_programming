#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concat two string
 * @ac: num of lines
 * @av: source
 * Return: destination
 */

char *argstostr(int ac, char **av)
{
int i, len = 0, lenindx = 0;
char *result = NULL;

if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
len += strlen(av[i]);
}
result = (char *)malloc((len + ac + 1) * sizeof(char));
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
strcat(result, av[i]);
lenindx += strlen(av[i]);
result[lenindx++] = '\n';
}
result[lenindx] = '\0';
return (result);
}
