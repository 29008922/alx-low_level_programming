#include "main.h"

/**
 * _memset - prints buffer in hexa
 * @s: The array
 * @b: What the array should be filled
 * @n: How many bytes of the array should be filled
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	*(s + 1) = b;/*add 1 position s*/

	return (s);
}
