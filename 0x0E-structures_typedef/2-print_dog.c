#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - pointer to struct dog to print
 * @d: pointer to struct dog to print
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
		return;
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("owner: %s\n", d->owner);
		else
			printf("owner: (nil)\n");
	}
}

