#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
/**
 * prnt_str - prints out a string
 *
 * Return: a stirng
 */
void prnt_str(void)
{
	char *str;

	str = "_putchar";

	for (; *str; str++)
	{
		putchar(*str);
	}
}
/**
 * print_alphabet - prints out the lowercase alphabet
 *
 * Return: a to z and a new line
 */
void print_alphabet(void)
{
	int i;

	i = 'a';

	for (; i <= 'z'; i++)
	{
		putchar(i);
	}
}
#endif
