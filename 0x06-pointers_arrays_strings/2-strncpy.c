#include "main.h"
/**
 * _strncpy - copies a string and works exactly like strncpy
 * @dest: copy destination
 * @src: string pointed to to be copied
 * @n: number of bytes form src to be copied
 *
 * Return: src written to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
