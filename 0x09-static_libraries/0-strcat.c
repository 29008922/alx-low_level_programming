#include "main.h"

/**
  * *_strcat - function that concatenates two strings.
  * @dest: the first string character
  * @src: the second string character
  *
  * Return: Returns a pointer to the resulting string dest
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
