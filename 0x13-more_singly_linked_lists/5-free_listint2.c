#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - frees aa linked list
 * @head: pointer to list being freed
 * Return: success
 */
void free_listint2(listint_t **head)
{
	listint_t *free_lst;

	if (head == NULL)
	return;

	while (*head)
	{
	free_lst = (*head)->next;
	free(*head);
	*head = free_lst;
	}

	*head = NULL;
}
