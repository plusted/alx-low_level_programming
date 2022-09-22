#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: array
 * @n: number of items in the array
 *
 * Return: nothing 0 success
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}

}
