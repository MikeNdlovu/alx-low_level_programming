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
	unsigned int i;	
	listint_t *node1;
	listint_t *node2 = *head;

	node1 = malloc(sizeof(listint_t));
	if (!node1)
	return (NULL);

	if (!head)
	return (NULL);

	node1->n = n;
	node1->next = NULL;

	if (idx == 0)
	{
	node1->next = *head;
	*head = node1;
	}

	for (i = 0; i < idx; i++)
	{
	if (i == idx - 1)
	{
	node1->next = node2->next;
	node2->next = node1;
	return (node1);
	}
	else
	node2 = node2->next;
	}
	
	return (NULL);
}
/** also works but checker marks wrong ??
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

	if (!node1)
	return (NULL);

	else
	return (node1);
}*/
