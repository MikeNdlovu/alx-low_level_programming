#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the number of arguments passed into it
 * @argc: counts number of arguments in the command line
 * @argv: pointer to an array of strings
 * Return: success
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%d\n", argc);
	}
	return (0);
}
