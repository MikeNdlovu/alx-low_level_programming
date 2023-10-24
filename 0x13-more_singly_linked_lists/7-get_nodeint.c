#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: first node of list
 * @index: index of node being returned
 * Return: success
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *locate;
	locate = head;

	while (i < index)
	{
	locate = locate->next;
	i++;
	}

	if (locate == NULL)
	return (NULL);

	else
	return (locate);
}
