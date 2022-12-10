#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:ssign a random number to n each time it is executed.
 *
 * prints the last digit of the number stored in the variable n.
 *
 * Return:value always 0 (Success)
 */

int main(void)

{

	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)

	{

		printf("Last digit of %d is %d and is greater than 5\n", n, (n % 10));

	}


	if ((n % 10) == 0)

	{

		printf("Last digit of %d is %d and is 0\n", n, (n % 10));

	}



	if ((n % 10) < 6 && (n % 10) !=)
	{

		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, (n % 10));

	}

	return (0);

}
