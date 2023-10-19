#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a list
 * @h: pointer to list
 * Return: success
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
	h = h->next;
	num++;
	}

	return (num);
}
