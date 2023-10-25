#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints all
 * @format: format to be used eg int
 * Return: success
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *m = "";
	va_list args;

	va_start(args, format);
	while (format[i])
	{
	switch (format[i])
	{
	case 's':
		s = va_arg(args, char *);
	
		if (s == NULL)
		s = "(nil)";
		printf("%s%s", m, s);
		break;
	case 'f':
		printf("%s%f", m, va_arg(args, double));
		break;
	case 'c':
		printf("%s%c", m, va_arg(args, int));
		break;
	case 'i':
		printf("%s%d", m, va_arg(args, int));
		break;
	default:
		i++;
		continue;
	}
	m = ", ";
	i++;
	}
	putchar('\n');
	va_end(args);
}
