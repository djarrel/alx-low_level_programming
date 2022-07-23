#include "main.h"
/**
 * main - prints all arguments
 * @argc: integer number of all arguments
 * @argv: pointer to arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
