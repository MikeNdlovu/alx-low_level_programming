#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of a list
 * @head: pointer to the linked list
 * @n: data to be stored in linked list
 * Return: linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *ptr;

	node = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);

	if (node == NULL)
		return (NULL);

	ptr = *head;
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
	*head = node;
	return (*head);
	}

	while (ptr->next != NULL)
	{
	ptr = ptr->next;
	}
	ptr->next = node;
	return (*head);
}
