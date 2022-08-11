#include "lists.h"
/**
 * _strlen - string length
 * @s: a pointer to a string
 * Return: length
 */
int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 * add_node - add a node at the beggining
 * @head: a pointer to the head of list
 * @str: pointer to a string
 * Return: new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);

}
