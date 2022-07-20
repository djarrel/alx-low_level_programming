#include "main.h"
/**
 * checkpal - check if string is a palindrome
 * @s: pointer to a string
 * @a: start of string
 * @b: end of string
 * Return: 1 palindrome 0 is not
 */

int checkpal(char *s, int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	if (s[a] != s[b])
	{
		return (0);
	}
	if (a < b + 1)
	{
		return (checkpal(s, a + 1, b - 1));
	}
	return (1);
}
/**
 * _strlen - checks the length of a string
 * @s: pointer to a string
 * Return: lengthe of the string
 */

int _strlen(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen(s + 1));
	}
	return (*s);
}
/**
 * is_palindrome - check is string is palindrome
 * @s: pointer to a string
 * Return: 1 palindrome 0 is not
 */
int is_palindrome(char *s)
{
	int n = _strlen(s);

	if (n == 0)
	{
		return (1);
	}
	return (checkpal(s, 0, n - 1));
}
