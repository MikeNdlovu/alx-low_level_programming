#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *new_node(const char *str);

/**
 * add_node - adds new node at end
 * @head: pointer to new node
 * @str: string node will contain
 * Return: success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *node;

	current = *head;
	if (head == NULL)
	return (NULL);
	node = new_node(str);
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
 * @str: string
 * Return: node
 */
list_t *new_node(const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	return (node);
}
