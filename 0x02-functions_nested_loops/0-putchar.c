#include "main.h"
/**
 * main - entry point into the program
 *
 * Return: Prints out _putchar and a new line
 */

int main(void)
{
	char *sh = "_putchar";

	for (; *sh; sh++)
	{
		_putchar(*sh);
	}
	_putchar('\n');
	return (0);
}
