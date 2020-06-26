#include "holberton.h"

/**
 *_strncpy - concatenates two strings
 *@dest: pointer for the first string we want to change
 *@src: pointer  for the second string
 *@n: dest
 *
 *Return: the new string with n bytes
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
