#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range of values
 * @max: max values stored
 *
 * Return: Pointer to the new array
 */

int *array_range(int min, int max)
{
	int *arr;
	int size;

	if (min > max)
		return (NULL);

	size = max - (min + 1);

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	int i;

	for (i = 0; min <= max; i++)
		arr[i] = min++;

	return (arr);
}
