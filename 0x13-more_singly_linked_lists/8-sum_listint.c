#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include "lists.h"

/**
 * sum_listint - adds all data in list
 * @head: pointer to first node
 * Return: success
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head->n == ' ' || head == NULL)
	return (0);

	else
	while (temp)
	{
	sum = sum + temp->n;
	temp = temp->next;
	}
	return (sum);
}
