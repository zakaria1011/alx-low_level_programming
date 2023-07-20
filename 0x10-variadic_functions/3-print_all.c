#include "variadic_functions.h"
/**
 *  print_all - function that print what ever
 * @format: arg
 */
void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);
char *s;
const char *format_itr = format;
while (*format_itr != '\0')
{
if (*format_itr == 'c')
{
printf("%c ", va_arg(args, int));
}
else if (*format_itr == 'i')
{
printf("%d ", va_arg(args, int));
}
else if (*format_itr == 'f')
{
printf("%f ", va_arg(args, double));
}
else if (*format_itr == 's')
{
s = va_arg(args, char *);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s ", s);
}
}
format_itr++;
}
va_end(args);
printf("\n");
}
