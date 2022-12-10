#include <stdio.h>

/**
 * main - Entry point
 * Description :program prints alphabet in lowercase followed bya new line
 * Return value: Always 0 (Success)
 */

int main(void)

{

	char z;

	z = 'a';

	while (z <= 'z')

	{

		putchar(z);

		z++;

	}

	putchar('\n');

	return (0);

}
