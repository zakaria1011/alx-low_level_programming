#include "lists.h"
/**
 * pre_function_main - execute before main
*/
void pre_function_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
/**
 * first_constructor - before main
*/
void first_constructor(void) __attribute__((constructor));
void first_constructor(void)
{
pre_function_main();
}
