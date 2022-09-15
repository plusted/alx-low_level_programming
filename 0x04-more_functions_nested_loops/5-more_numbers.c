#include "main.h"
/**
 * more_numbers - prints 10 timess numbers form 0-14
 *
 * Return: 0 success
 */
void more_numbers(void)
{
	int n, i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
