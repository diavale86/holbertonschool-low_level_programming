#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the first string we want to change
 * @src: pointer to the second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0 ; dest[i] != '\0'; i++)
	{
	}
	for (j = 0 ; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
