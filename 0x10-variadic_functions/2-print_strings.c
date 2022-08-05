#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: a pointer that seperates strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list s;
	char *t;

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		t = va_arg(s, char*);
		printf("%s", t ? t : "(nil)");
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(s);
}
