#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - Function that frees dogs
 *@d: Pointer
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
