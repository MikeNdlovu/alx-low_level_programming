#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - gives dog info
 * @d: pointer initializing struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
