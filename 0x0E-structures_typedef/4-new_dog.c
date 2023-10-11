#include "dog.h"
#include <stdio.h>

/**
 * new_dog - puts new info for dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog dogie;
	struct dog *s;

	s = &dogie;

	if (s != NULL)
	{
		s->name = name;
		s->age = age;
		s->owner = owner;
	}
	return (s);
}
