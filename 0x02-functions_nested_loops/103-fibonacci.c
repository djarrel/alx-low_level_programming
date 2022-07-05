#include <stdio.h>

/**
 * main - sum even-valued terms of Fibonacci sequence under 4,000,000
 * Return: 0 if succesful
 */
int main(void)
{
	int i;
	long int onebefore, twobefore, current;
	long int evenfibsum;

	onebefore = 1;
	twobefore = 1;
	current = 2;
	evenfibsum = 2;

	for (i = 2; current < 4000000; i++)
	{
		twobefore = onebefore;
		onebefore = current;
		current = twobefore + onebefore;

		if (!(current % 2))
			evenfibsum += current;
	}
	printf("%ld\n", evenfibsum);
	return (0);
}
