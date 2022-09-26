#include "main.h"
#include <stddef.h>

/**
 * _strchr - Search for the 1st occurence of the char c in str s
 * @s: string to be searched for char c
 * @c: character being serached for in string s
 *
 * Return: pointer to first occurence of c in s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (NULL);
		}
	}
	return (s);
}
