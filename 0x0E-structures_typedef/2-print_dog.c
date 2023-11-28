#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to structure
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!((*d) .name))
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);

	i(!f(d->owner))
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", (*d).owner);
}
