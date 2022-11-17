#include "lists.h"

/**
 *sum_listint - function that returns the sum of all the data (n) of a
 * listint_t linked list
 *@head: pointer
 *
 *Return: returns the sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	int num;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		num = head->n;
		head = head->next;
		sum += num;
	}
	return (sum);
}
