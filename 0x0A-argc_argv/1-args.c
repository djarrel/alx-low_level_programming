#include "main.h"
/**
 * main - prints number of arguments passed
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: 0 success
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
