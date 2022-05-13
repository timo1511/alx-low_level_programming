#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initializes a dog structure
 * @d: A dog structure.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of owner of the dog
 *
 * Return: Nothing
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
