#include <stdio.h>
#include "lists.h"
void first(void)__attribute__ ((constructor));
/**
 * first - function comes before others are executed
 * Return: nothing
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
