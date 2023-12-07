#include "lists.h"

/**
 * free_dlistint - frees list of nodes
 * @head: pointer to first node
 * Return: success
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
	return;

	while (head->next != NULL)
	{
	current = head->next;
	free(head);
	head = current;
	}
	free(head);
}
