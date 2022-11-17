#include "lists.h"

/**
 *pop_listint - function that deletes the head node of a listint_t linked list
 *and returns the head node’s data (n)
 *@head: pointer to pointer
 *
 *Return: returns the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ntemp;

	if (*head == NULL)
		return (0);

	ntemp = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (ntemp);
}
