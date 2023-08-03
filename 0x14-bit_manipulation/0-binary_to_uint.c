#include "main.h"
/**
 * binary_to_unit - convert to binary
 * @b: pointer to  binary
 * Return: decimal
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int sum = 0, i = 0;

if (b ==  NULL)
return (0);
while (b[i] != '\0')
{
if (b[i] != '1' && b[i] != '0')
return (0);
sum = (sum << 1) + (b[i] - '0');
i++;
}
return (sum);
}
