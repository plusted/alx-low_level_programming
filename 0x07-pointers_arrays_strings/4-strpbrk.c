#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurence in s of string accept.
 * @s: initial string
 * @accept: string whose chars are to be located in s
 *
 * Return: pointer to the byte s or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
