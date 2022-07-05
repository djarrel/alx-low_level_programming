#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @x: holds the values
 * Return: r is value of the last digit
*/

int print_last_digit(int x)
{
	int d;

	d = x % 10;

	if (d < 0)
	{
		d *= -1;
	}
	_putchar(d + '0');
	return (d);
}
