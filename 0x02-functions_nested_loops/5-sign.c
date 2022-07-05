#include "main.h"

/**
 * print_sign - prints the sign
 * @n: hold the value of the charcter
 * Return: 1 shows positive 0 shows zero -1 is negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
