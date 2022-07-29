#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of string 2 to concatenate
 *     to s1
 * Return: null or concatenated space to memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i, j = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
		j++;
	}

	c = malloc(sizeof(char) * (j + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	j = 0;

	for (i = 0; s1[i]; i++)
	{
		c[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		c[j++] = s2[i];
	}
	c[j] = '\0';
	return (c);
}
