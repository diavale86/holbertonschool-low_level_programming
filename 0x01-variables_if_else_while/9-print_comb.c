#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numeros;

	for (numeros = 48; numeros <= 57; numeros++)
	{
		putchar (numeros);
		if (numeros != 57)
		{
			putchar (',');
			putchar (32);
		}
	}
	putchar('\n');
	return (0);
}
