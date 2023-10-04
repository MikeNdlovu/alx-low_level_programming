#include "main.h"
#include <stdlib>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - covert params passed to prog to str
 * @ac: the argument count
 * @av: argument v
 * Return: Success
 */
char *argstostr(int ac, char **av)
{
	int ca = 0, ia = 0, ja = 0, ka = 0;
	char *m;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ia < ac)
	{
		while (av[ia][ja])
		{
			ca++;
			ja++;
		}

		ja = 0;
		ia++;
	}

	m = malloc((sizeof(char) * ca) + ac + 1);

	ia = 0;
	while (av[ia])
	{
		while (av[ia][ja])
		{
			m[ka] = av[ia][ja];
			ka++;
			ja++;
		}

		m[ka] = '\n';

		ja = 0;
		ka++;
		ia++;
	}
	ka++;
	m[ka] = '\0';
	return (m);
}
