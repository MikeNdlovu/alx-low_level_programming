#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint - prints all the elements of a list
 * @listint_t: list being printed
 * @h: pointer to list
 * Return: success
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	i++;
	}
	return (i);
}
