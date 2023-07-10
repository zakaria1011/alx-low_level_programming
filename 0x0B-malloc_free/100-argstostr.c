#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * argstostr - concat all arg
 * @ac: num of line
 * @av: lines of strings
 * Return: string concat
 */
char *argstostr(int ac, char **av)
{
char *result;
int i;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0 ; i < ac ; i++)
{
strcat(result, av[i]);
}
result[ac] = '\0';
return (result);
}
