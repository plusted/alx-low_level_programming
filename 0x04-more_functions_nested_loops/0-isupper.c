#include "main.h"
/**
 * _isupper - checks for unuppercase letter
 * @a: input
 *
 * Return: 1 if a is uppercase, o otherwise
 */
int _isupper(int a)
{
	if ((a >= 'A') && (a <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
