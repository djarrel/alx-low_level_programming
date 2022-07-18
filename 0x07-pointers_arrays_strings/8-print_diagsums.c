#include "main.h"
/**
 * print_diagsums - sum of diagonal values in matrix
 * @a: array
 * @size: value of the two dimensional array
 */

void print_diagsums(int *a, int size)
{
	int i, j, x, y;

	j = 0;
	x = 0;
	y = 0;
	for (i = 0; i < size; i++)
	{
		x = (size * i) + y;
		j = j + *(a + x);
		y++;
	}
	printf("%d\n", j);

	j = 0;
	y = size - 1;
	for (i = 0; i < size; i++)
	{
		x = (size * i) + y;
		j = j + *(a + x);
		y--;
	}
	printf("%d\n", j);

}
