#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * listint_len - writes no. of elements in linked lists(nodes)
 * @h: pointer to list
 * Return: success
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
	h = h->next;
	i++;
	}
	return (i);
}
