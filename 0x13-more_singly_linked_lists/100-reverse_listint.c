#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * reverse_listint - reverse a list(linked)
 * @head: pointer to pointer head
 * Return: success
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
	return (NULL);

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	return (NULL);

	if (*head == NULL)
	node->next = NULL;

	else
	node->next = *head;
	*head = node;

	return (*head);
}
