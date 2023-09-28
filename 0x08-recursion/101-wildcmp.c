#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * wildcmp - compare two strings for identicality
 * @s1: string to be cmpared
 * @s2: string being compared
 * Return: Success
 */
int wildcmp(char *s1, char *s2)
{
	if (s1[1] == s2[1])
	{
		return (1);
	}

	return (0);
}
