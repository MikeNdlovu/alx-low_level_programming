#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

listint_t *new_node(int);

/**
 * add_nodeint_end - adds new node at end
 * @head: pointer to new node
 * @n: int node will contain
 * Return: success
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *node;

	current = *head;
	if (head == NULL)
	return (NULL);
	node = new_node(n);
	if (node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	while (current->next != NULL)
		current = current->next;
	current->next = node;

	return (*head);
}

/**
 * new_node - makes ne node
 * @n: int value
 * Return: node
 */
listint_t *new_node(int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	return (NULL);

	node->n = n;
	node->next = NULL;

	return (node);
}
