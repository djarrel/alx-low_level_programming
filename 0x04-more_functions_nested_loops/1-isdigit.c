#include "main.h"

/**
 * _isdigit - checks for digit from 0 to 9
 * @c: charcter
 * Return: 1 digit 0 is not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
