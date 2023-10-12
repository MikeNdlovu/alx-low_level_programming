#include "3-cal.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -mains it all
 * @argc: counts number of arguments passed to function
 * @argv: arrays passed to function
 * Return: success
 */
int main(int argc, char *argv[])
{
	int (ayii)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ayii = get_op_func(argv[2]);

	if (ayii != get_op_func(argv[2]))
	{
		printf("Error");
		exit(98);
	}

	printf("%d\n", ayii(atoi(arg[1]), atoi(arg[3])));
	return (0);
}
