#include "main.h"
/**
 * _abs - prints the absolutr value
 * @i: takes integer values
 * Return: 0 success
*/

int _abs(int i)
{
	int r;

	if (i >= 0)
	{
		return(i);
	}
	else
	{
		r = i * -1;
                return(r);
	}
}
