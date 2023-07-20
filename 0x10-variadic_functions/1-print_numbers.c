#include "variadic_functions.h"
/**
 * print_numbers -  print list of numbers
 * @separator: string separ
 * @n: number of arg
 * @...: list
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
int num;
if (separator != NULL)
{
for (i = 0 ; i < n ; i++)
{
num = va_arg(args, int);
printf("%d%s", num, separator);
}
}
else
{
for (i = 0 ; i < n ; i++)
{
num = va_arg(args, int);
printf("%d", num);
}
printf("\n");
}
va_end(args);
}
