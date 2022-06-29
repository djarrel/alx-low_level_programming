#include <stdio.h>

/**
 * main - used to print the size of the various types.
 * Return: 0 shows success, non zero shows error.
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %l\n", (unsigned long)sizeof(a));
	printf("Size of an int: %l\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %l\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %l\n", (unsigned long)sizeof(d));
	printf("Size of a float: %l\n", (unsigned long)sizeof(e));
	return (0);
}
