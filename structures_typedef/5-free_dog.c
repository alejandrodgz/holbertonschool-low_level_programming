#include "dog.h"

/**
 * free_dog - entry
 * @d: owner
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
