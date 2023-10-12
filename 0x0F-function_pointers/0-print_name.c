#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - prints name
 * @name: name being printed
 * @f: pointer to function
 * Return: success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	(*f)(name);
}
