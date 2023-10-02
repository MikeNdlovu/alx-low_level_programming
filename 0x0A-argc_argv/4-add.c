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
	int num;
	int sum;
	int i;

	(void)num;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
		{
		sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	if (argc == 1)
	{
		return (0);
	}
	return (0);
}
