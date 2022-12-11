#include <stdio.h>

int main(void)
{
	int age;

	printf("what is your age");
	scanf("%d", &age);

	if (age > 18)
	{
		printf("iam an adult");
	}
	else if (age < 18)
	{
		printf("iam still a student");
	}
	else if (age == 0)
	{
		printf("are you born really");
	}
	else
	{
		printf("i dont know who really you are");
	}

	return (0);
}
