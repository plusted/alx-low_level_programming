#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string whose words will be capitalised
 *
 * Return: a capitalized string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		else
		{
			continue;
		}
	}
	return (s);
}
