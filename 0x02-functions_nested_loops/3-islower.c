#include "main.h"
/**
 * _islower - checks if a letter is lowercase
 * @c: input to be checked
 *
 * Return: 1 if lowercase 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 95 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
