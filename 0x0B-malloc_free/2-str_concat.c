#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: pointer to an allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int i, j = 0, count = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] || s2[i]; i++)
	{
		count++;
	}
	s = malloc(sizeof(char) * count);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		s[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		s[j++] = s2[i];
	}
	return (s);
}
