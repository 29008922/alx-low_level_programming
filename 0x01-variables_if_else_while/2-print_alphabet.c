#include <stdio.h>

/**
 *  main - void
 *
 *  Description: a program that prints alphabet using putchar
 *
 * Return: Always void (Success/correct)
 */

int main(void)
{

	char x;

	x = 'a';

	while (x <= 'x')
	{
		putchar(x);

		x++;
	}
	putchar('\n');
	return (0);
}
