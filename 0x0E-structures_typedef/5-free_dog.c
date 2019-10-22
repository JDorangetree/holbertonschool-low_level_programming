#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory of structure
 * @d: pointer of structure
 *
 * Return: On success
 * On error, -1 is returned, is set appropriately.
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
