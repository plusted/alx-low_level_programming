#include <stdio.h>
#include "main.h"
/**
 * _strlen - counts the length of a string
 * @s: input string
 *
 * Return: i str len success
 */
int _strlen(char *s)
{
	int i, n;

	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n++;
	}
	return (n);
}
