#include <stdio.h>
/**
 * main - entry point
 *
 * Return: single digit numbers of base 10
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n');
	return (0);
}
