#include "main.h"
/**
 * _memcpy - copies memory
 * @dest: character
 * @src: character
 * @n: value of src
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
