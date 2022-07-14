#include "main.h"
/**
 * leet - to change the string to leet
 * @s: pointer to a string
 *Return: string
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "aeotlAEOTL";
	char b[] = "4307143071";

	i = 0;
	while (s[i] != 0)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
		i++;
	}
	return (s);
}
