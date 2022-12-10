#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 * /
 int main (void)
 {
 
 	int a, b, c;
	a = 0;
	while (a < 100)
	{
		b = a % 10; /*single digit*/
		c= a / 10; /*double digit*/
		if(b < c)
		{
			putchar(c + '0');
			putchar(b + '0');

			if(a < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		a ++;
	putchar('\n')

	return (0);
}
