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
	
	while (a[f] != '\0')
	{
	f++;
	}
	while (a[n] < a[f])
	{
	n++;
	}
	 
	for (n = 0; n < f; n++)
	{
	printf("%d", a[n]);
	}
	_putchar('\n');
}
