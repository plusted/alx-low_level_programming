#include "main.h"

/**
 * _strspn - get len in bytes of s[] consisting of elemensts in accept[]
 * @s: intitial array
 * @accept: contains chars supposed to be found in s
 *
 * Return: number of chars in s contained in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
			}
		}
	}
	return (k);
}
