#include "main.h"
/**
 * _isalpha - returns 1 if a letter is lowercase or upper
 * @c: input to be check if it's an letter
 *
 * Return: 1 if letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
