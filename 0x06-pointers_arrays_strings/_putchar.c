#include <unistd.h>

/**
* _putchar - write the character c to stdout.
*@c: character to be printed
*return:1 on success
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
