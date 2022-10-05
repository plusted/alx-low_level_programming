#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - A pointer to a new string which is a duplicate to string str
 * @str: String to be duplicated
 *
 * Return: pointer to the duplicated string or Null if insufficent mem
 */

char *_strdup(char *str)
{
	int i, j;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= *str; j++)
	{
	}

	j += 1;
	arr = malloc(sizeof(char) * j);

	for (i = 0; i < j; i++)
	{
		arr[i] = str[i];
	}

	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}
