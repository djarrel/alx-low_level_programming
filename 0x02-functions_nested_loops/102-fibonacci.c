#include <stdio.h>
/**
 * main - prints first 50 fibonnaci
 * Return: 0 success
 */

int main(void)
{
	int i;
	long int x;
	long int y;
	long int z;

	x = 1;
	y = 2;

	printf("%ld, ", x);
	printf("%ld, ", y);
	for (i = 1; i <= 50; i++)
	{
		z = x + y;
		if (i != 50 )
		{
			printf("%ld, ", z);
			x = y;
			y = z;
		}
		else
		{
			printf("%ld\n", z);
		}
	}
	return (0);
}
