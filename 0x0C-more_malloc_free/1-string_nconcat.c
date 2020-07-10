#include "holberton.h"

/**
  * string_nconcat - Concatenate two strings
  *@s1: string given
  *@s2: 2d string given
  *@n: number of bytes
  *Return: NULL or concatenated strings
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
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
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	if (n >= b)
		n = b;
	s3 = malloc(sizeof(char) * (a + n + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		s3[a] = s1[a];
	}
	for (b = 0; b < n; b++)
	{
		s3[a + b] = s2[b];
	}
	s3[a + b] = '\0';
	return (s3);
}
