#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @x: holds the values
 * Return: r is value of the last digit
*/

int print_last_digit(int x)
{
	int d;

	if (x < 0)
	{
		x = x * -1;
	}

	d = x % 10;
	_putchar(d + '0');
	return (d);
}
