/**
 * swap_int - swaps the values of two integers
 * @a: first int to be swapped
 * @b: second int to be swapped
 *
 * Return: 0 success
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;

	*b = n;
}
