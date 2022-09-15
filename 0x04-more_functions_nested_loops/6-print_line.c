#include "main.h"
/**
 * print_line - prints the _ character n number of times
 * @n: number of times the line should be printed
 *
 * Return: 0 success
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <=n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
