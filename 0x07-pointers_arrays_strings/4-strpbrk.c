#include "main.h"
#include <stdio.h>

/**
* _strpbrk - prints the consecutive character os s1 that are in s2.
* @s: source string
* @accept: searching string
*
* Return: returns new string.
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + 1); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + 1) == *(accept + j))
			{
				break;
			}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
		}
	}
	return (0);
}
