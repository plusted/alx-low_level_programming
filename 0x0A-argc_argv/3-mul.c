#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two line argument numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful or 1 if unsuccessful
 */

int main(int argc, char *argv[])
{
	int res, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);
	return (0);
}
