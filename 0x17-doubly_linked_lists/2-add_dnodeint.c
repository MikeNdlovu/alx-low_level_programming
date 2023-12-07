#include "lists.h"

/**
 * add_dnodeint - adds node at beggining of linked list
 * @head: pointer to the linked list
 * @n: data being added to linked list
 * Return: added linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));

	if (head == NULL)
	return NULL;

	if (node == NULL)
	return NULL;

	if (*head == NULL)
	node->next = NULL;

	else
	node->next = *head;
	node->n = n;
	*head = node;

	return (*head);
}
