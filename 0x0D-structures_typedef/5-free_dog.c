#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that free malloc dogs
 *
 * @d: struct
 *
 *
 * Return: None
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
		return;
}
