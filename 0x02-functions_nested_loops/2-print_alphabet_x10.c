#include "main.h"

/**
 * print_alphabet_x10 - 10x alphabet
 *
 * Return: Always success
 */

void print_alphabet_x10(void)
{

	int a = '0';
	char b;
	
	while (a <= '9')
	{
	for (b = 'a'; b <= 'z'; b++)
	{
	_putchar(b);
	}
	putchar('\n');
	a++;
	}
}

