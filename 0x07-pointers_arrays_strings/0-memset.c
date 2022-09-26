#include "main.h"

/**
 * _memset - fills the first n bytes of mem area pointed to by s with b
 * @s: pointer to the mem area to be filled
 * @b: constant that fills the new mem area
 * @n: size of memory area to be filled in s by b
 *
 * Return: char of pointer s filled by b for memory size n
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
