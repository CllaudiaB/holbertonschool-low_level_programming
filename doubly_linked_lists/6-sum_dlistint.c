#include "lists.h"

/**
 *sum_dlistint - function that returns the sum of all the data (n) of
 * a dlistint_t linked list
 *@head: pointer
 *
 *Return: returns the sum of all the data (n)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		head = head->next;
		sum += head->n;
	}
	return (sum);
}
