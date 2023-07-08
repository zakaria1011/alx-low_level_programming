#include<stdio.h>
#include "main.h"
/**
 * main - main functio
 * @argc: number of line
 * @argv: array of pointer
 * Return: 1
 */
int main(int argc, char *argv[])
{
char *p = "Error";
if (argc == 2)
{
printf("%d", (*argv[0]) * (argv[1]));
}
else
{
printf("%s \n", p);
return (1);
}
return (0);
}
