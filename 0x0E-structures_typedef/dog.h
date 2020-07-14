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
typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif /* DOG_H */
