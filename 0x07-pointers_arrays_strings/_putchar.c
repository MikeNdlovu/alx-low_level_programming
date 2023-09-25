#include "main.h"
#include <unistd.h>

/**
 * main - _putchar writes character c to stdout print 
 *
 * Return: zero (success)
 */
int putchar(char c)
{
        return (write(1, &c, 1));
}
