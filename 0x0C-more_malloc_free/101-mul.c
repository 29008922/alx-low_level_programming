#include "main.h"

/**
 *main - multiply two positive numbers
 *Print the result, followed by a new line
 *@argc: n arguments
 *@argv: args
 *return : integer
 */
int main(int argc, char *argv[])
{
	unsigned long int;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
	exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
			exit(98);
			}
		}
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%lu\n", mul);
	}
	return (mul);
}


