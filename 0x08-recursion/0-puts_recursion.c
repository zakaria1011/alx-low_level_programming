#include "main.h"
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
printf('%c', *s);
_put_recursion(s + 1);
}
}
