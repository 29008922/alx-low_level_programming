#include "main.h"

/**
* _strncat - concatanates two strings
* @dest: destination string
* @src: string to add to end of dest
* @n: num of bytes to take from src
*
* Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
