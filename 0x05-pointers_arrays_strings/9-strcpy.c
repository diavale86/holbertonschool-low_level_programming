#include "holberton.h"

/**
 * _strcpy - Write a function that prints n elements of an array
 * @dest: copies the string pointed to by src
 * @src: variable
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	*(dest + j) = '\0';

	return (dest);
}
