#include "lists.h"

/**
 *add_node - function that adds a new node at the beginning of a list_t list
 *@head: pointer to pointer
 *@str: string
 *
 *Return: the address of the new elemen
 */

list_t *add_node(list_t **head, const char *str)
{
	char *s;
	int i = 0;
	list_t *new;

	s = strdup(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	new->str = s;
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);

}
