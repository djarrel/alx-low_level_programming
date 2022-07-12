#include "main.h"
/**
 * rev_string -  reverse string
 * @s: pointer
 */

void rev_string(char *s)
{
	int i, j;

	j = 0;
	for (i = 0; s[i] != 0; i++)
	{
		j++;
	}
	for (i = 0; i < j / 2; i++)
	{
		char k;

		k = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = k;
	}
}
