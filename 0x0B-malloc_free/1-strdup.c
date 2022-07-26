#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: pointer to a string
 * Return: a pointer to an allocated space
 */

char *_strdup(char *str)
{
	int i, count = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != 0; i++)
	{
		count++;
	}
	s = malloc(sizeof(char) * count);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != 0; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
