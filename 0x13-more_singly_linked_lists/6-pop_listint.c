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

	if (*head == NULL)
	return (0);

	else
	{
	listint_t *first = *head;
	*head = (*head)->next;
	free(first);
	}
	return (0);
}
