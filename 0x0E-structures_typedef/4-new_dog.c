#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - function that creates a new dog.
 *
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: a new dog stored
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	if (name != NULL)
	{
		p->name = malloc((strlen(name) + 1) * sizeof(char));
		if (p->name == NULL)
		{
			free(p);
			return (NULL);
		}
		else
			strcpy(p->name, name);
	}
	else
		return (NULL);
	p->age = age;
	if (owner != NULL)
	{
		p->owner = malloc((strlen(owner) + 1) * sizeof(char));
		if (p->owner == NULL)
		{
			free(p->name);
			free(p);
			return (NULL);
		}
		else
			strcpy(p->owner, owner);
	}
	else
		return (NULL);
return (p);
}
