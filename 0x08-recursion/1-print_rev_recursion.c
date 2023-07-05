#include "main.h"
#include<stdio.h>
/**
 * _print_rev_recursion - print string in reverse
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
printf("\n");
}
else
{
_print_rev_recursion(s + 1);
printf("%c", *s);
}
}
