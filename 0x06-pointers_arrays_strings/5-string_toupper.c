#include "main.h"
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
		if (src[i] <= 'z' && src[i] >= 'a')
		{
			src[i] = src[i] - 32;
	i++;
	}
	}
	return (src);
}
