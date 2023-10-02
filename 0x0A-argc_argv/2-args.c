#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function that prints the number of arguments passed into it
 * @argc: counts number of arguments in the command line
 * @argv: pointer to an array of strings
 * Return: success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s", argv[i]);
			putchar('\n');
		}
	}
	return (0);
}
