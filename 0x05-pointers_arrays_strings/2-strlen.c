#include "main.h"
/**
 * _strlen - coubt string length
 * @s: character
 * Return: count
 */
int _strlen(char *s)
{
	int i;
	int count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
