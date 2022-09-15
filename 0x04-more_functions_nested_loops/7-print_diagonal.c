#include "main.h"
/**
 * print_diagonal - outputs a backslash n times
 * @n: number of times to print \
 *
 * Return: 0 success
 */
void print_diagonal(int n)
{
	int i, a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (i = 1; i <= a; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
