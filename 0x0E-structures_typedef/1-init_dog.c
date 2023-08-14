#include "dog.h"

/**
 * init_dog - aSDAS
 * @d: asdasd
 * @name: asdasd
 * @age: asdasd
 * @owner: asdasd
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
