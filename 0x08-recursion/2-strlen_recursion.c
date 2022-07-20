#include "main.h"
/**
 * _strlen_recursion - string length using recursion
 * @s: pointer to string
 * Return: s
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (*s);
}
