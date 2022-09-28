#include "main.h"

/**
 * factorial - returns the factorial of n
 * @n: int whose factorial we are solving for
 *
 * Return: 1 if n = 0; n! if n > 1 and -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
