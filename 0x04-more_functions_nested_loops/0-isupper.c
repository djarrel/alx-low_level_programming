#include "main.h"

/**
 * _isupper - test for uppercase character
 * @c: character
 * Return: 1 uppercase 0 is not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
