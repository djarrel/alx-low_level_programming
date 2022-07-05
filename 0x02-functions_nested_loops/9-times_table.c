#include "main.h"
/**
 * times_table - table 9
*/

void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			x = i * j;
			_putchar(',');
			_putchar(' ');
			if ((x / 10) == 0)
			{
				_putchar(' ');
				_putchar(x + '0');
			}
			else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
