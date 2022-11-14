#include "dog.h"
#include <stddef.h>

/**
 * print_dog - prints a struct dog
 * @d: dog strut pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}

	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %0.6f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
