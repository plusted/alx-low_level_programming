#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: no of arguments
 * @argv: arr of arguments
 *
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
