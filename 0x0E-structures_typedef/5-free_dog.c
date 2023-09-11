#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
 * free_dog - frees memory associated with a dot_t struct
 * @d: pointer to the dog_t structure to fre
 *
 * Return: void
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
