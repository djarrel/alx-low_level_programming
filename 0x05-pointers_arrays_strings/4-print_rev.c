#include "main.h"
/**
 * print_rev - print reverse
 * @s: pointer
 */
void print_rev(char *s)
{
	int i, r;

	r = 0;
	for (i = 0; s[i] != 0; i++)
	{
		r++;
	}
	for (i = r - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
