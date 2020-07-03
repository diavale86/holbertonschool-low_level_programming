#include "holberton.h"
/**
 *raiz - function that returns the power of number
 *@n: original number
 *@y: result of multiplyng n
 *
 *Return: square
 */
int raiz(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y > n)
	{
		return (-1);

	}
	return (raiz(n, y + 1));
}
/**
*_sqrt_recursion - function that returns the power of number
*@n: number
*Return: the natural square
*/
int _sqrt_recursion(int n)
{
	return (raiz(n, 1));
}
