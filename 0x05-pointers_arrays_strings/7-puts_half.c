#include "main.h"
/**
 * puts_half - prints last half of a string
 * @str: pointer
 */
void puts_half(char *str)
{
	int i, j;

	j = 0;
	for (i = 0; str[i] != 0; i++)
	{
		j++;
	}

	for (i = j / 2; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
