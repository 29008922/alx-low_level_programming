#include "main.h"

/**
*_memset - fill ablock of memory with a specific value
*@s: starting adress of memory to be filled
*@b: the desired value
*@n: number of bytes to changed
*
*return: changed array with new value for n bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
