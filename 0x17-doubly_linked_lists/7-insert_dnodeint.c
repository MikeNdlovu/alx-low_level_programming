#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a nodeAT PARTICULAR POSITION
 * @h: pointer to first node
 * @idx: index where node dhould be inserted
 * @n: data to be put at node
 * Return: success
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *node1;
	dlistint_t *node2 = *head;

	node1 = malloc(sizeof(dlistint_t));
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
