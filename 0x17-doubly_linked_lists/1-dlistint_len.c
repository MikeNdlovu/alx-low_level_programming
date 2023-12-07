#include "lists.h"

/**
 * dlistint_len - brings back the number of nodes in a linked list
 * @h: pointer to nodes of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num_nodes = 0;

	while (h)
	{
	h = h->next;
	num_nodes++;
	}
	return (num_nodes);
}
