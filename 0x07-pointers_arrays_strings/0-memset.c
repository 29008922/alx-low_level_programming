#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: point memory area
* @b: constant byte that fill memory area
* @n: bytes of memory area filled
*
* Return: pointer of the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
