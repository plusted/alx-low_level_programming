#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: a,b,c,...,y,z
 */
int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
