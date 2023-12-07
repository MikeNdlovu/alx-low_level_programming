#include "lists.h"

/**
 * sum_dlistint - adds all data in list
 * @head: pointer to first node
 * Return: success
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head->n == ' ' || head == NULL)
	return (0);

	else
	while (temp)
	{
	sum = sum + temp->n;
	temp = temp->next;
	}
	return (sum);
}
