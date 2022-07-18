#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: pointer to a string
 * @accept: bytes
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;
	int c = 0;

	for (j = 0; accept[j] != 0; j++)
	{
		count++;
	}

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			if (j == (count - 1) && s[i] != accept[j])
			{
				return (c);
			}
		}
	}
	return (c);
}
