#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: difference in two strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != 0 && s2[i] != 0; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
