#include "holberton.h"
#include <stddef.h>

/**
 *_strpbrk - gets the length of a prefix substring
 *@s: the string
 *@accept: oleh
 *
 *Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int v;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (v = 0; accept[v] != '\0'; v++)
		{
			if (s[i] == accept[v])
				return (s + i);
		}
	}

	return (NULL);
}

