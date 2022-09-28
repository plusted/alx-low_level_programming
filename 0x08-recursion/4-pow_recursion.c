#include "main.h"

/**
 * _pow_recursion - calculates x to power y
 * @x: int which we are looking for power
 * @y: power
 *
 * Return: 1 if y == 0 or x^y otherwise
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
