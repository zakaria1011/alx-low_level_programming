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
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] = s[i] - 32;
	i++;
	}
	return (src);
}
