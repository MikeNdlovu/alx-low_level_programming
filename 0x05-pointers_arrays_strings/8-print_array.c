#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_array - prints an array
 * @a: the pointer of the array
 * @n: number of elements of the array to be printed
 * Return: Success
 */
void print_array(int *a, int n)
{
	int f;
 
	for (f = 0; f < n; f++)
	{
	printf("%d", a[f]);
	}
	_putchar('\n');
}
