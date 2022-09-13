#ifndef MAIN_H_
#define MAIN_H_
/**
 * prnt_strg - prints out a  string
 *
 * Return: a stirng
 */
void prnt_strg(void)
{
	char *strng;

	strng = "_putchar";

	for (; *strng; strng++)
	{
		putchar(*strng);
	}
}
#endif
