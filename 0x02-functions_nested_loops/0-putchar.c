#include <stdio.h>
/**
 * main - entry point into the program
 *
 * Return: Prints out _putchar and a new line
 */
int main(void)
{
	char *str;
	
	str = "_putchar";

	for (; *str; str++)
	{
		putchar (*str);
	}
	putchar('\n');
	return (0);
}
