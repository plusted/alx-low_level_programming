#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: new string will be added to dest
 * @src: string to be added to dest
 * @n: number of n bytes from src
 *
 * Return: the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
		if (src[j] == '\0')
		break;

	}
	return (dest);
}
