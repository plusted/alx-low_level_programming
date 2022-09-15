#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		while (b > c && a > b)
		{
			largest = a;
		}
	}
	else if (b > a)
	{
		while (a > c && b > a)
		{
			largest = b;
		}
	}
	else
	{
		largest = c;
	}
	return (largest);
}
