#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array initialized by specific char
 * @size: size of the array
 * @c: character to initialize with
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *ptrArray;
	unsigned int count;

	ptrArray = malloc(size * sizeof(char));
	for (count = 0; count < size; count++)
		ptrArray[count] = c;
	return (ptrArray);
}
