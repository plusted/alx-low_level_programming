#include "main.h"
/**
 * _abs - returns the absolute value of a number
 * @n: number to be changed to absolute
 *
 * Return: n*-1 for negative number or n otherwise
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
