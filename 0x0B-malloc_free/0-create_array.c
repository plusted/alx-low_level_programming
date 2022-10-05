#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates a dynamic mem array
 * @size: size of input
 * @c: char
 * Return: a Null if size = 0 or a char array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
