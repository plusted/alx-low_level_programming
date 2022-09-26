#include "main.h"

/**
 * _memcpy - copies memory area of n bytes from src to dest
 * @src: memory area that will be copied
 * @dest: memery area to be copied to
 * @n: size of memory area to be copied
 *
 * Return: a pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
