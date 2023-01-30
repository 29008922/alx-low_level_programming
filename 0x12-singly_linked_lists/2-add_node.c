#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer to a node head
 * @str: name of new node:
 * Return: The address of the new element.
 *otherwise NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	list_t *new;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	s = strdup(str);
	len = strlen(str);
	new->str = s;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
