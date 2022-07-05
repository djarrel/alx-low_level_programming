#include "main.h"

/**
 * print_times_table - prints nxn times table
 * @n: value of times table dimensions
 */

void print_times_table(int n)
{
	int i, j, x;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				x = i * j;
				_putchar(',');
				_putchar(' ');
				if ((x / 100) == 0 && (x / 10) == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((x % 10) + '0');
				}
				else if ((x / 100) == 0)
				{
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				else
				{
					_putchar((x / 100) + '0');
					_putchar(((x / 10) % 10) + '0');
					_putchar((x % 10) + '0');
				}
			}
			_putchar(10);
		}
	}
}
