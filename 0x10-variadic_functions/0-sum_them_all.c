#include "variadic_functions.h"
/**
 * sum_them_all - adds all its parameters
 * @n: number of paramaters
 * Return: the sum of all parameters or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list s;

	if (n == 0)
	{
		return (0);
	}

	va_start(s, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(s, int);
	}
	va_end(s);
	return (sum);

}
