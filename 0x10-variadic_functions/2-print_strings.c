#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: seperates members of ...
 * @n: number of strings passed to function
 * Return: success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list strings;
	char *str;

	va_start(strings, n);

	while(i < n && separator != NULL)
	{
	str = va_arg(strings, char *);

	if (str == NULL)
	printf("(nil)");

	else
	printf("%s", str);

	if (i != n - 1)
	printf("%s", separator);
	i++;
	}
	putchar('\n');
	va_end(strings);
}

