#include "lists.h"

/**
 *add_node_end - function that adds a new node at the end of a list_t list
 *@head: pointer to pointer
 *@str: string
 *
 *Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;
	char *s;

	s = strdup(str);
	if (s == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	while (s[i] != '\0')
		i++;
	new->str = s;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
