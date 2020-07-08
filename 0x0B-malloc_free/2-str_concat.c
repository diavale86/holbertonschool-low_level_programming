#include "holberton.h"

/**
  * str_concat - Concatenate two strings
  *@s1: string given
  *@s2: 2d string given
  *Return: NULL or concatenated strings
  */
char *str_concat(char *s1, char *s2)
{
	int a, b;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}

	s3 = malloc(sizeof(char) * (a + b + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		s3[a] = s1[a];
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		s3[a + b] = s2[b];
	}
	s3[a + b] = '\0';
	return (s3);
}
