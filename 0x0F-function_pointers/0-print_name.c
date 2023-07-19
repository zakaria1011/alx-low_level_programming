#include "function_pointers.h"
/**
 * print_name - print a name
 * @name : string
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
return;
}
