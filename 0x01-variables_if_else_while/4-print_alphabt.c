#include <stdio.h>
/**
 * main - entry point
 *
 * Return: output all letters of the alphabet except q and e
 */
int main(void)
{
	char a;

	a = 'a';

	for (; a <= 'z'; a++)
	{
		if (a =='e'|| a =='q')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
