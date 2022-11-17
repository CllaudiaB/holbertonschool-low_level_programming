#include "lists.h"

/**
 *insert_nodeint_at_index - function that inserts a new node at a given position
 *@head: poiter to pointer
 *@idx:  index of the list where the new node should be added
 *@n: integer
 *
 *Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
			i++;
			if (i == idx - 1)
				break;
		}
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
