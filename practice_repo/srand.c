#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int seed;
	int n, counter;

	printf("Enter a unsigned number(seed)\n");
	scanf("%u", &seed);
	/* Initialize random number generator using srand */
	srand(seed);

	printf("Enter number of random numbers\n");
	scanf("%d", &n);

	for (counter = 0; counter < n; counter++)
	{
		printf("%d\n ", rand());
	}
	return (0);
}

