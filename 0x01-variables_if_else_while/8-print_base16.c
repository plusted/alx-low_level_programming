#include <stdio.h>
/**
 * main - entry point
 *
 * Return: numbers of base 16 in lowercase
 */
int main(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 16) + '0');
	}
	for (i = 16; i <= 21; i++)
	{
		putchar((i % 16) + 'a');
	}
	putchar('\n');
	return (0);
}
