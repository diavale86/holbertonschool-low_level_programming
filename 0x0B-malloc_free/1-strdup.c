#include "holberton.h"
#include <stdio.h>

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
