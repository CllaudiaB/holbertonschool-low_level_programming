#include "lists.h"

/**
 *list_len - function that returns the number of elements
 * in a linked list_t list
 *@h: pointer to list_t
 *
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
