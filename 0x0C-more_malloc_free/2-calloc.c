#include "holberton.h"

/**
  * _calloc - function that allocates memory for an array
  *@nmemb: number of members
  *@size: size of nmemb
  *
  *Return: void
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j;
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * nmemb * size);
	if (s == NULL)
		return (NULL);

	for (j = 0; j < size * nmemb; j++)
		s[j] = 0;
	return (s);
}
