#include <stdio.h>

int main(void)
{
	char grade;

	printf("enter your gradet to see your remarks\n");
	scanf("%c", &grade);

	switch (grade)
	{
		case 'A':
		printf("you scored exellent in your cat\n");
		break;
		case 'B':
		printf("you did well good work\n");
		break;
		case 'C':
		printf("you are above average\n");
		break;
		case 'D':
		printf("below average consult and do more revision\n");
		break;
		case 'E':
		printf("bring your parent or guardian\n");
		break;
	default:
		printf("you did not sit for exam\n");
	}
	return (0);
}
