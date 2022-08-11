#include "lists.h"
/**
 * _strlen - string length
 * @s: pointer to a string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - adds node at the end
 * @head: pointer to the start node
 * @str: pointer to a string
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
	}

	return (new);
}
