#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: triangle of #
 */
void print_triangle(int size)
{
	int spc, row, tr;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row <= (size - 1); row++)
		{
			for (spc = 0; spc < (size - 1) - row; spc++)
			{
				_putchar(' ');
			}
			for (tr = 0; tr <= row; tr++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
