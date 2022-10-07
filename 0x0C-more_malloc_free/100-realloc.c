#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memeory block using malloc and free
 * @old_size: the size in bytes of the allocated space fro ptr
 * @new_size: the new size in bytes of the new memory block
 * @ptr: pointer to the memory previously allocated by malloc
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *p2;
	unsigned int i;

	if (new_size == old_size)
		return (NULL);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size);
	if (!p1)
		return (NULL);

	p2 = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			p1[i] = p2[i];
		}
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			p1[i] = p2[i];
		}
	}

	free(ptr);
	return (p1);
}
