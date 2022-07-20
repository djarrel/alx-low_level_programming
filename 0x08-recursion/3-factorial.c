#include "main.h"
/**
 * factorial - finds ther factorial of an integer
 * @n: integer
 * Return: facrorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (n);
}
