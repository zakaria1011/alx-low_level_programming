#include "main.h"

/**
 * print_alphabet_x10 - printf alphabet 10 times.
 */
void print_alphabet_x10(void)
{

int i ;

for(i=0; i<10 ; i++) 
{
    char c = 'a';

    while (c <= 'z')
    {
       _putchar(c);
        c++;
    }

   _ putchar('\n');
}
}
