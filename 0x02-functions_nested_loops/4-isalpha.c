#include "main.h"

/**
 * int _isalpha - checks char or other
 * @c: variable to be checked
 * Return: Always (Success) 
*/
int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	return (1);

	else if (c >= 'A' && c <= 'Z')
	return (1);

	else
	return (0);
}
