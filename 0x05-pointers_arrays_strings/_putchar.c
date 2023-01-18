#include <unistd.h>

/**
* _putchar.c - write character c to stdout
*@c: char to be printed
* return: 1 on success
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
