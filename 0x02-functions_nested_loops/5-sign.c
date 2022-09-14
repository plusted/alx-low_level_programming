#include "main.h"
/**
 * print_sign - takes an int and returns 1,0,-1
 * @n: input int
 *
 * Return: 1, 0, -1
 */
int print_sign(int n)
{
	if ( n >= 1)
	{
		return (1);
	}
	else if ( n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
