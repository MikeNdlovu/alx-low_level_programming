#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlb.h>

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

	if (nmeb == 0 || size == 0)
	{
		return (NULL);
	}

	l = nmeb * e;
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
