#include "lists.h"
/**
 * print_list - prints list
 * @h: pointer to a struct of typedef list_l
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
