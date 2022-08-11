#include "lists.h"
/**
 * list_len - list number of elements
 * @h: pointer to list_t
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
