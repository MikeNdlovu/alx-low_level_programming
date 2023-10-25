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

	len = strlen(format);

	va_start(args, format);

	while (i < 1)
	{
	switch (format[i])
	{
	case 'i':
	{
	int x = va_arg(args, int);
	printf("%d", x);
	break;
	}

	case 'f':
	{
	double x = va_arg(args, double); 
	printf("%f", x);
	break;
	}
	
	case 's':
	{
	char *str = va_arg(args, char *);
	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);
	break;
	}

	case 'c':
	{
	int x = va_arg(args, int);
	printf("%c", x);
	break;
	}
	}
	i++;
	}
	
	while (i > 0 && i < len)
	{
	switch (format[i])
	{
	case 'i':
	{
	int x = va_arg(args, int);
	printf(", %d", x);
	break;
	}

	case 'f':
	{
	double x = va_arg(args, double);
	printf(", %f", x);
	break;
	}

	case 's':
	{
	char *str = va_arg(args, char *);
	if (str == NULL)
	printf("(nil)");
	else
	printf(", %s", str);
	break;
	}

	case 'c':
	{
	int x = va_arg(args, int);
	printf(", %c", x);
	break;
	}
	}
	i++;
	}
	putchar('\n');
	va_end(args);
}
