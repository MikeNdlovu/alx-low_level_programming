#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - deletes first node
 * @head: pointer to first node
 * Return: success
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *first;

	if (*head == NULL)
	return (0);

	else
	{
	i = (*head)->n;
	first = (*head)->next;
	free(*head);
	*head = first;
	}
	return (i);
}
