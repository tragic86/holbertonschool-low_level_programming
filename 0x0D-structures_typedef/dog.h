#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - defines a structure for dogs
 * @name: Dog name
 *
 * @age: Dog age
 *
 * @owner: Owner of Dog
 *
 * Return: none
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
#endif
