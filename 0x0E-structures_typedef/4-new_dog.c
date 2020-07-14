#include "dog.h"
/**
 *_strdup - function returns a pointer to a new string
 *@str: string
 *
 *
 *Return: char
 */
char *_strdup(char *str)
{
	char *s;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0' ; j++)
		;

	s = malloc(sizeof(char) * (j + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (str[j])
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';

	return (s);

}

/**
 *new_dog - function that creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *s;
	char *j;
	dog_t *mia;

	if (name == NULL || owner == NULL)
		return (NULL);

	mia = malloc(sizeof(dog_t));
	if (mia == NULL)
		return (NULL);
	s = _strdup(name);

	if (!s)
	{
		free(mia);
		return (NULL);
	}
	j = _strdup(owner);

	if (!j)
	{
		free(s);
		free(mia);
		return (NULL);
	}

	else
	{
		mia->name = s;
		mia->owner = j;
		mia->age = age;
	}
	return (mia);
}
