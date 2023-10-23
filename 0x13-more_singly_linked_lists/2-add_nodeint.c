#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - adds node in beginning
 * @head: pointer to pointer head
 * @n: int being put into data
 * Return: success
 */
listint_t *add_nodeint(listint_t **head, const int n)
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
	node->n = n;
	*head = node;

	return (*head);
}
