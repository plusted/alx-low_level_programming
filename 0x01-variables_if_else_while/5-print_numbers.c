#include <stdio.h>
/**
 * main - entry point
 *
 * Return: output 0,1,2,...,9
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
