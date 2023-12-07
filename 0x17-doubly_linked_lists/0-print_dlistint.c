#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: pointer to nodes to be printed
 * Return: success
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	num++;
	}
	return (num);
}
