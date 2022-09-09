#include <stdio.h>
/**
 * main - entry point
 *
 * Return: the alphabet in lowerecase then uppercase
 */
int main(void)
{
	char a, a_uppr;

	a = 'a';
	a_uppr = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (a_uppr <= 'Z')
	{
		putchar(a_uppr);
		a_uppr++;
	}
	putchar('\n');
	return (0);
}
