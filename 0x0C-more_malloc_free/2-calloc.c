#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - ...
 * @nmem: ...
 * @size: ...
 * Return: success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int e = 0, l = 0;
	char *m;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	l = nmemb * size;
	m = malloc(l);

	if (m == NULL)
		return (NULL);

	while (e < l)
	{
		m[e] = 0;
		e++;
	}

	return (m);
}
