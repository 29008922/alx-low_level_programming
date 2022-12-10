#include <stdio.h>

/**
 * main - main block
 *
 * Description: Print all numbers of base 10, starting from 0.
 *
 * You can only use `putchar` to print to console
 *
 * Return: 0
 */

int main(void)

{
	int i;


	for (i = 0; i < 10; i++)

	{

		putchar(i + '0');

	}

	putchar('\n');

	return (0);

}
