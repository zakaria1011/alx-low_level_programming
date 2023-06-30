#include "main.h"
#include<ctype.h>
/**
 * string_toupper - upercase
 * @src: thestring
 * return: nothing
 */
char *string_toupper(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		src[i] = toupper(src[i]);
	i++;
	}
	return (src);
}
