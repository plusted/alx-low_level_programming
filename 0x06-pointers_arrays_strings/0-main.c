#include "main.h"
#include <stdio.h>
int main (void)
{
	char s1[98] = "hello ";
	char s2[] = "world!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s\n", s2);
	ptr = _strcat(s1, s2);
	printf("%s\n", ptr);
	return (0);
}
