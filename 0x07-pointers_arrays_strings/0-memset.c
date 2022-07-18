#include "main.h"
/**
 * _memset - set memory
 * @s: pointer to a string
 * @b: charcter to be changed
 * @n: space to be use
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
