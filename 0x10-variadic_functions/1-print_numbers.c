#include "variadic_functions.h"
/**
 * print_numbers - prints numbers separated by a string
 * @separator: pointer to a string that prints between numbers
 * @n: number of values
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list s;

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(s, int));
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(s);
}
