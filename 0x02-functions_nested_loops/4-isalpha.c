#include "main.h"

/**
 * _isalpha - checks code
 * @c: is to be checked
 * Return: 1 shows it is an alphabet 0 it is not.
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
