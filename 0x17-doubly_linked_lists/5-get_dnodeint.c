#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: first node of list
 * @index: index of node being returned
 * Return: success
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	dlistint_t *locate;

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
