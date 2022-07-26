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
	for (i = 0; str[i]; i++)
	{
		count++;
	}
	s = malloc(sizeof(char) * (count + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
