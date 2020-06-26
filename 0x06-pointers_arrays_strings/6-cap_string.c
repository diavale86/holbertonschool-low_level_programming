#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string
 * @cap: pointer
 * Return: cap
 */
char *cap_string(char *cap)
{
	int i;

	for (i = 0; cap[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (cap[i] >= 'a' && cap[i] <= 'z')
			{
				cap[i] = cap[i] - 32;
			}
		}
		if (cap[i] == '\t' || cap[i] == '.' || cap[i] == ' ' ||
		cap[i] == ')' || cap[i] == '\n' || cap[i] == '(' ||
		cap[i] == '{' || cap[i] == '}' || cap[i] == '"' ||
		cap[i] == ';' || cap[i] == '?' || cap[i] == '!' ||
		cap[i] == ',')
		{
			if (cap[i + 1] >= 'a' && cap[i + 1] <= 'z')
			{
				cap[i + 1] = cap[i + 1] - 32;
			}
		}
	}
	return (cap);
}
