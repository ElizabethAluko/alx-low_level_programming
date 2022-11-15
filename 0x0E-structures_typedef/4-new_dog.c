#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * *new_dog - creates a new dog
 * @name: Dog's name.
 * @age: Dog's age
 * @owner: Dog's owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, j, k;

	p_dog malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;

	p_dog->name = malloc(i + 1);
	p_dog->owner = malloc(j + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		p_dog->name[k] = name[k];
	p_dog->name[k] = '\0';

	p_dog->age = age;

	for (k = 0; k < j; k++)
		p_dog->owner[k] = owner[k];
	p_dog->owner[k] = '\0';

	return (p_dog);
}
