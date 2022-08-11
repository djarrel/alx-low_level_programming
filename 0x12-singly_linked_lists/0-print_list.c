#include "lists.h"
/**
 * print_list - prints list
 * @h: pointer to a struct of typedef list_l
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *temp = h;

	for (; temp; temp = temp->next, i++)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
	}
	return (i);
}
