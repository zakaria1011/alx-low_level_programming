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
int len = 0;
char *result = NULL

for (i = 0 ; i < ac ; i++)
{
    len += strlen(av[i]);
}

result=(char*)malloc((len+1) * sizeof(char));
char *result = NULL;

if (ac == 0 || av == NULL)
{
return (NULL);
}

for (i = 0 ; i < ac ; i++)
{
strcat(result, av[i]);
}
result[ac]='\n';
