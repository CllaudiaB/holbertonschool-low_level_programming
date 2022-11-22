#include "lists.h"

/**
 *add_dnodeint_end - function that adds a new node at the end
 * of a dlistint_t list
 *@head: pointer to pointer
 *@n: number
 *
 *Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
		new->prev = temp;
	}

	return (new);
}
