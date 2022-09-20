#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input string to be reveresed
 *
 * Return: 0 success
 */
void rev_string(char *s)
{
	int a, b;
	a = _strlen(s) - 1;

	for (b = a; b >= 0; --b)
	{
		(s[b]);
	}
}
/**
 * _strlen - prints the length of a string
 * @s: string whose length will be printed
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i, sum;
	char pl;

	pl = s[0];
	i = 1;
	sum = 0;

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
