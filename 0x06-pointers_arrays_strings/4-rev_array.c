#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: a pointer to array
 * @n: number of elements in an array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
	for (i = 0; i < n; i++)
	{
		i++;
	}
}
