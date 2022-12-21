#include "main.h"

/**
* _strcat - concatenate two strings
* @dest: copy to
* @src: copy from
* return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j; /* j will hold the length of the source */

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
