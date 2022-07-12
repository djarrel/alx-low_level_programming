#include "main.h"
/**
 * puts2 - prints every other character starting with the first
 * @str: pointer
 */

void puts2(char *str)
{
	int i, j;

	j = 0;
	for (i = 0; str[i] != 0; i++)
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
