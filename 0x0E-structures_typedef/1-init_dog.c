#include "dog.h"

/**
 *init_dog - function that initializes a variable
 *@d: direcction of structe dog
 *@name: pointer to the name in the structure
 *@age: float
 *@owner: pointer to the owner in the structure
 *
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
