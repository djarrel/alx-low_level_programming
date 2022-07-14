#include "main.h"
/**
 * cap_string - capitalizes first letter of words in a string
 * @s: pointer to a string
 * Return: s
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
			continue;
		}
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'
			|| s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!'
			|| s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')'
			|| s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
