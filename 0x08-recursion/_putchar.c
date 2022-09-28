#include <unistd.h>

/**
 * _putchar - writes a character c to stdout
 * @c: char to print
 *
 * Return: on success 1, -1 on error
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
