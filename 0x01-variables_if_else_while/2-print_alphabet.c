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

while (x <= 'a')
{
	putchar(x);

	x++;
}
putchar('\n');
return (x);
}
