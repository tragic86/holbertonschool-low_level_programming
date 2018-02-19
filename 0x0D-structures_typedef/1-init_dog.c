#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function that initialize a variable type
 *
 * @d: struct
 *
 * @name: dog name
 *
 * @age: dog age
 *
 * @owner: dog owner
 *
 *
 * Return: none
 *
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}
