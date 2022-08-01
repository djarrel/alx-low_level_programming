#include "dog.h"
/**
 * init_dog - initializes variables
 * @d: a pointer to the variables
 * @name: pointer to the name
 * @age: variable age
 * @owner: pointer to variable owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
