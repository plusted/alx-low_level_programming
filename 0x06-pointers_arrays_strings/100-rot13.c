#include "main.h"

/**
 * rot13 - rotates letters by 13 digits
 * @s: input array to be rotated
 *
 * Return: rotated char output
 */

char *rot13(char *s)
{
	char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'
		, 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
			'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'
				, 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
			'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	char rot[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x'
		, 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'
			, 'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U'
			, 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E'
			, 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	int i, j;

	for (i = '0'; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
