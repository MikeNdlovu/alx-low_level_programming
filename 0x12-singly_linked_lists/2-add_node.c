#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds node at beginning of list
 * @head: initial pointer to list
 * @str: string
 * Return: success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	
	if (head == NULL)
		return ('\0');

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	if (*head == NULL)
		node->next = NULL;
	else
	node->next = *head;
	node->str = strdup(str);
	node->len = strlen(str);
	*head = node;

	return (0);
}
