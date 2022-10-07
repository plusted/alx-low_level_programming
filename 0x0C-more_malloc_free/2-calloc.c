#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memeory for an array, using malloc
 * @nmemb: array
 * @size: size in bytes of the array
 *
 * Return: a pointer to the allocated memory; 0 success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	memset(array, 0, nmemb * size);

	return (array);
}
