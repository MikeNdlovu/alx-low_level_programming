#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the function
 * @agrc: count of command in the command line
 * @agrv: pointer to an array of strings
 * Return: success
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		_putchar(argv);
		_putchar('\n');
	}
	return (0);
}
