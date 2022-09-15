#include <stdio.h>
/**
 * main - prints numbers from 1-100 fizz buzz
 *
 * Return: 0 success
 */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fb);
		else if (i % 5 == 0)
			printf("%s ", b);
		else if (i % 3 == 0)
			printf("%s ", f);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
