#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase letters
 * @c: letter being checked
 * Return: 1 for uppercase & 0 otherwise
 */
int _isupper(int c)
{

if (c <= 'A' && c <= 'Z')
{
return (1);
}

return (0);
}
