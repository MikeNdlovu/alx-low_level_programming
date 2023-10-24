#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a nodeAT PARTICULAR POSITION
 * @head: pointer to first node
 * @idx: index where node dhould be inserted
 * @n: data to be put at node
 * Return: success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{	
	listint_t *node1 = *head;

	listint_t *node2 = malloc(sizeof(listint_t));

	node2->n = n;
	node2->next = NULL;

	while (idx != 1)
	{
		node1 = node1->next;
		idx--;
	}
	node2->next = node1->next;
	node1->next = node2;

	if (idx == 1)
	return (NULL);

	if (node1 != NULL)
	return (node2);

	else
	return (NULL);
}
