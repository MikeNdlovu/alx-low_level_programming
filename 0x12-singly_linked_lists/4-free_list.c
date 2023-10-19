#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees list of nodes
 * @head: pointer to first node
 * Return: success
 */
void free_list(list_t *head)
{
	list_t *current;

	if (head == NULL)
		return (NULL);
	while (head->next != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
	free(head->str);
	free(head);
}
