#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a new type struct dog
 * @name: the dog name
 * @age:  the dog age
 * @owner:the dog owner
 * @d:the pointer to struct dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
