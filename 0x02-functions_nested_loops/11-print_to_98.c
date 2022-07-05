#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers to 98
 *@n: holds the value that the counter will start
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
			{
				continue;
			}
			printf(", ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
			{
				continue;
			}
			printf(", ");
		}
	}
	printf("\n");
}
