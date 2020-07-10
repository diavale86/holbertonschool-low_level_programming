#include "holberton.h"

/**
  * array_range - function that allocates memory for an array
  *@min: number of members
  *@max: size of nmemb
  *
  *Return: int
  */
int *array_range(int min, int max)
{
	int *s;
	int j;
	int v;

	if (min > max)
	{
		return (NULL);
	}
	v = max - min;
	s = malloc(sizeof(int) * (v + 1));
	if (s == NULL)
		return (NULL);

	for (j = 0; min <= v ; j++, min++)
		s[j] = min;
	return (s);
}
