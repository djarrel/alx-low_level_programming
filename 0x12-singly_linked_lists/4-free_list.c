#include "lists.h"
/**
 * free_list - free list
 * @head: pointer to the head to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head)
	{
		while (head)
		{
			temp = head->next;
			free(head->str);
			free(head);

			head = temp;
		}
	}
}
