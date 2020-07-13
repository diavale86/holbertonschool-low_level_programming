#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - structure that prints a quote
 *@name: * name of dog
 *@age: age of dog
 *@owner: * dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

int _putchar(char c);

#endif /* DOG_H */
