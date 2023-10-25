#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - prints all formats
 * @format: type of format eg string or float
 * Return: success
 */
void print_all(const char * const format, ...)
{
	int i = 0, len;
	va_list args;
	char *str, *m = "";

	len = strlen(format);

	va_start(args, format);

	while (i < len)
	{
	if (format[i] == 's')
	{
	str = va_arg(args, char *);

	if (str == NULL)
	printf("(nil)");

	else (printf("%s%s", m, str));
	}
	switch (format[i])
	{
case 'i':
	printf("%s%d", m, va_arg(args, int));
	break;
case 'f':
	printf("%s%f", m, va_arg(args, double));
	break;
case 'c':
	printf("%s%c", m, va_arg(args, int));
	break;
	}
	m = ", ";
	i++;
	}
	va_end(args);
	putchar('\n');
}
