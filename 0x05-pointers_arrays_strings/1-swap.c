#include "main.h"

/**
 *swap_int - swaps two integers
 *@a: pointer of integer
 *@b: pointer of integer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
