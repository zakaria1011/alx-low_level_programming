#include "main.h"
#include<stdio.h>
/**
 * _puts_recursion - print string  but in recursion way
 * @s: string to puts
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
printf("\n");
}
else
{
printf("%c", *s);
_puts_recursion(s + 1);
}
}
