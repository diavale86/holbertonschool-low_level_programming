#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of your program
 *@ac: number of arguments
 *@av: arguments
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int s;
	int j;
	int h = 0;
	int n = 0;
	char *pun;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}

	for (s = 0; s < ac; s++)
	{
		j = 0;
		while (av[s][j])
		{
			n++;
			j++;
		}
	}
	pun = malloc(sizeof(char) * ac + n + 1);

	if (pun == NULL)
	{
		return (NULL);
	}
	for (s = 0; s < ac; s++)
	{
		j = 0;
		while (av[s][j])
		{
			pun[h] = av[s][j];
			h++;
			j++;
		}
		pun[h] = '\n';
		h++;
	}
	pun[h] = 0;
	return (pun);
}
