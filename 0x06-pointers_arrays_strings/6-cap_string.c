#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * cap_string - Capitalize all words of a string
 * @src: string capitalising from
 * Return: Success
 */
char *cap_string(char *src)
{
	int n;
	int len;

	len = strlen(src);

	for (n = 0; n < len; n++)
	{
		if (src[n] == 0)
		{
		while (src[n] >= 'a' && src[n] <= 'z')
		{
			src[n] = toupper(src[n]);
			n++;
		}
		}
		else if (src[n - 1] == ',' || src[n - 1] == ';')
		{
			if (src[n] >= 'a' && src[n] <= 'z')
			{
			src[n] = src[n] - 32;
			}
		}
		else if (src[n - 1] == '.' || src[n - 1] == ' ')
		{
			if (src[n] >= 'a' && src[n] <= 'z')
			{
				src[n] = src[n] - 32;
			}
		}
		else
		{
		src[n] = src[n];
		}
	}
		return (src);
}
