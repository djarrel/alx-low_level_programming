#include "main.h"

void jack_bauer(void)
{
	int i, j, m, n;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (m = 0; m < 6; m++)
			{
				for (n = 0; m <= 9; n++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(n + '0');
					_putchar('\n');
				}
			}
			if (i == 2 && j == 3)
			{
				break;
			}
		}
	}
}
