#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize variable type struct dog
 * @d: pointer
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner of the new dog
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
