#include "main.h"
/**
 * _strpbrk - searches for a string
 * @s: pointer to a string
 * @accept: pointer to a string to be matched
 * Return: return string that matches or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != 0)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		i++;
	}
	return (NULL);
}
