#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strspn - unction that gets the length of a prefix substring
 *@s: returns bytes in s
 *@accept: bytes taken for accept
 *Return: Success
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int m;

m = strspn(s, accept);

return (m);
}
