#include "holberton.h"

/**
 *_strcmp - compare two strings
 *@s1: pointer for the first string we want to compare
 *@s2: pointer for the second string we want to compare
 *
 *Return: and integer
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
	s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
