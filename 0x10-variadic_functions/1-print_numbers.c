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

	if (separator == NULL)
		return;

	va_start(args, n);

	while (p < n && separator != NULL)
	{
	x = va_arg(args, int);
	printf("%d", x);

	if (p != n - 1)
	printf("%s", separator);

	p++;
	}
	putchar('\n');
	va_end(args);
}
