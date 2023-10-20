#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/* _putchar - prints char
 * @c: char to be written
 * Return:: void
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
