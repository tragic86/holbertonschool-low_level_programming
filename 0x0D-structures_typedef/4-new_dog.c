#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog
 *
 * @name: name of dog
 *
 * @age: age of dog
 *
 * @owner: owner of dog
 *
 *
 * Return: pointer to new space
 *
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_dog;
	int i, j;
	char *n, *o;

	if (name == NULL)
		return (NULL);

	if (owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	n = malloc(sizeof(char) * _strlen(name) + 1);
	if (n  == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	o = malloc(sizeof(char) * _strlen(owner) + 1);
	if (o == NULL)
	{
		free(n);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		n[i] = name[i];
	n[i] = '\0';

	for (j = 0; owner[j] != '\0'; j++)
		o[j] = owner[j];
	o[j] = '\0';

	new_dog->name = n;
	new_dog->age = age;
	new_dog->owner = o;
	return (new_dog);
}

/**
 * _strlen - string length helper function
 *
 * @s: string
 *
 * Return: length of string
 *
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
