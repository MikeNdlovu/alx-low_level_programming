#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node;

node = malloc(sizeof(dlistint_t));

if (head == NULL)
return (NULL);

if (node == NULL)
return (NULL);

