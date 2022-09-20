#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Return: o success
 */
void print_rev(char *s)
{
	int i, j;
	i = _strlen(s) - 1;

	for (j = i; j >= 0; --j)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
int _strlen(char *s)
{
	int n, sum;
	char pl = s[0];

	n = 1;
	sum = 0;

	while (pl != '\0')
	{
		sum++;
		pl = s[n++];
	}
	return (sum);
}
