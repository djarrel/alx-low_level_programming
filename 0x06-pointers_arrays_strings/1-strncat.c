#include "main.h"
/**
 * _strncat - concatenates two strings using n bytes
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * @n: bytes from src
 * Return: dest the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	for (j = 0; j < n && src[j] != 0; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = 0;
	return (dest);
}
