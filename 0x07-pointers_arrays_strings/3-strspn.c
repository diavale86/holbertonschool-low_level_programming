#include "holberton.h"
#include <stddef.h>

/**
 *_strspn - gets the length of a prefix substring
 *@s: the string
 *@accept: oleh
 *
 *Return: accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int v;
	int d;

	d = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (v = 0; accept[v] != '\0'; v++)
		{
			if (s[i] == accept[v])
				d++;
		}
	}

	return (d);
}
