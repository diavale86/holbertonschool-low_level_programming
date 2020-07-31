#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: constant char pointer.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, count = 0, pow = 1;

	if (!b)
		return (0);

	while (*(b + count))
		if (*(b + count) == '0' || *(b + count) == '1')
			count++;
		else
			return (0);
	while (count)
	{
		count--;
		if (*(b + count) == '1')
			res += pow;
		pow *= 2;
	}
	return (res);
}
