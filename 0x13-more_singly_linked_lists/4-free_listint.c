#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - frees list of nodes
 * @head: pointer to first node
 * Return: success
 */
void free_listint(listint_t *head)
{
	listint_t *current;

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
