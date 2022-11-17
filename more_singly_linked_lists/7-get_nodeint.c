#include "lists.h"

/**
 *get_nodeint_at_index - function that returns the nth node
 *of a listint_t linked list
 *@head: pointer
 *@index: the index of the node, starting at 0
 *
 *Return:  returns the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index = 0 && head != NULL)
		return (head);
	while (head != NULL)
	{
		head = head->next;
		i++;
		if (i == index)
			break;
	}
	return (head);
}
