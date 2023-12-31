#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string seperating arguments(no.)
 *@n: number of arguments passed to function
 *Return:success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	unsigned int p = 0;
	va_list args;

	va_start(args, n);

	for (p = 0; p < n; p++)
	{
	x = va_arg(args, int);
	printf("%d", x);

	if (p != n - 1 && separator != NULL)
	printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}
