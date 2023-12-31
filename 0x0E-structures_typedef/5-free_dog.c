#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - a function that frees a dog
 * @d: pointer to structure fun
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
