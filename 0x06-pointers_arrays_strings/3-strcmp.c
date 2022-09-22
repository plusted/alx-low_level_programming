#include "main.h"
/**
 * _strcmp - compares string s1 againist string s2
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: 0 if s1=s2, +ve numb if s2<s1 -ve numb if s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			break;
		}
	}
	return (s1[i] - s2[i]);
}
