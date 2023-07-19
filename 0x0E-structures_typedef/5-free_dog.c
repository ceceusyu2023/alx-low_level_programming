#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees day
 * @d: pointer to struct dog to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

