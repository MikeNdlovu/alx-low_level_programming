#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at particaular place
 * @head: pointer to fisrt node
 * @index: place or location of node to be deleted
 * Return: 1(success) or -1(fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0 )
	{
		*head = (*head)->next;
		free(del);
		return (1);
	}

	while (i < index - 1)
	{
	if (!del)
	return (-1);
	del = del->next;
	i++;
	}

	current = del->next;
	del->next = current->next;
	free(current);

	return (1);
}
