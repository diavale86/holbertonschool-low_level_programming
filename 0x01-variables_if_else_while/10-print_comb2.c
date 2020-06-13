#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numeros, numeros1;

	for (numeros = 48; numeros <= 57; numeros++)

	{
		for (numeros1 = 48; numeros1 <= 57; numeros1++)
		{
			putchar (numeros);
			putchar (numeros1);
			if (numeros != 57 || numeros1 != 57)
			{
				putchar (',');
				putchar (32);
			}
		}
	}

	putchar(10);
	return (0);
}
