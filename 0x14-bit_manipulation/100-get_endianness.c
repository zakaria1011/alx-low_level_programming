#include "main.h"
/**
 * get_endianness - get big E or little E
 * Return: 0 or 1;
*/
int get_endianness(void)
{
unsigned short int  value  =  0x0102;
unsigned char *b_ptr = (unsigned char *) &value;
if (b_ptr[0] == 0x01)
{
return (0);
}
else
{
return (1);
}
}
