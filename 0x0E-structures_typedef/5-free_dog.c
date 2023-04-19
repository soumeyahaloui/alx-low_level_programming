#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory assigned for a struct dog
 * @d: free to struct dog
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
