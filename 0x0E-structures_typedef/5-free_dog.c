#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory pointed to a struct type dog_t
 * @d: pointer to a structure type dog.
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
