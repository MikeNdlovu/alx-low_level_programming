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
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2 && atoi(argv[1]) < 0)
	{
		return (0);
		putchar('\n');
	}
	else if (argc == 2 && atoi(argv[1]) % 25 == 0)
	{
		printf("%d\n", atoi(argv[1]) / 25);
	}
	else if (argc == 2 && atoi(argv[1]) % 10 == 0)
	{
		printf("%d\n", atoi(argv[1]) / 10);
	}
	else if (argc == 2 && atoi(argv[1]) % 10 != 0)
	{
		printf("%d\n", atoi(argv[1]) % 10);
	}
	else if (argc == 2 && atoi(argv[1]) % 25 != 0)
	{
		printf("%d\n", atoi(argv[1]) / 25 + atoi(argv[1]) % 25);
	}
	return (0);
}
