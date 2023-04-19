#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable to struct dog
 * @d: pointer to struct dog to initialize
 * @name: name initialize to dog
 * @age: age  initialize to dog
 * @owner: owner  initialize to dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
