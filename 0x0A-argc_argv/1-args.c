#include "main.h"
/**
 * main - function
 * @argc: number of lines
 * @argv: array to pointer
 * Return: always 0
 */
int main(int argc, char *argv[] __attribure__((unused)))
{
int count = 0;
while (argv != NULL)
{
count++;
}
_putchar(count);
return (0);
}
