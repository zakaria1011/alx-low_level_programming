#include "variadic_functions.h"
/**
 *  print_all - function that print what ever
 * @format: arg
 * @...: args
 */
void print_all(const char * const format, ...)
{
va_list args;
int idx = 0, printed = 0;
char *s;

va_start(args, format);
while (format[idx] != '\0')
{
switch (format[idx])
{
case 'c':
printf("%c", va_arg(args, int));
printed = 1;
break;
case 'i':
printf("%d", va_arg(args, int));
printed = 1;
break;
case 'f':
printf("%f", va_arg(args, double));
printed = 1;
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
{
s = "(nil)"
}
printf("%s", s);
printed = 1;
break;
default:
break;
}
idx++;
if (format[idx] && printed)
{
printf(", ");
printed = 0;
}
}
va_end(args);
printf("\n");
}
