#include "main.h"
#include <stdlib.h>
/**
 * main - multiplication of arguments
 * @argc: integer of arguments
 * @argv: pointer to arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
